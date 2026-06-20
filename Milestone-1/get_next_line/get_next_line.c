/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:30:00 by virva             #+#    #+#             */
/*   Updated: 2026/06/20 08:56:53 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_to_stash(int fd, char *stash)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*temp;
	ssize_t	bytes_read;

	while (ft_strchr(stash, '\n') == NULL)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(stash), NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(stash, buffer);
		if (!temp)
			return (free(stash), NULL);
		free(stash);
		stash = temp;
	}
	return (stash);
}

static char	*extract_line(char **stash)
{
	char	*newline;
	char	*line;
	char	*left;
	size_t	len;

	newline = ft_strchr(*stash, '\n');
	len = (newline - *stash) + 1;
	line = ft_substr(*stash, 0, len);
	left = ft_substr(*stash, len, ft_strlen(*stash) - len);
	if (!line || !left)
	{
		free(*stash);
		*stash = NULL;
		return (NULL);
	}
	free(*stash);
	*stash = left;
	return (line);
}

static char	*last_line(char **stash)
{
	char	*line;

	if (**stash == '\0')
	{
		free(*stash);
		*stash = NULL;
		return (NULL);
	}
	line = *stash;
	*stash = NULL;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if (!stash)
	{
		stash = ft_strdup("");
		if (!stash)
			return (NULL);
	}
	stash = read_to_stash(fd, stash);
	if (!stash)
		return (NULL);
	if (ft_strchr(stash, '\n'))
		return (extract_line(&stash));
	return (last_line(&stash));
}
