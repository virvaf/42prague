/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:30:20 by virva             #+#    #+#             */
/*   Updated: 2026/04/17 14:49:01 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (s[start] != '\0')
	{
		if (ft_strlen(s) - start < len)
			len = ft_strlen(s) - start;
		substr = (char *)malloc(sizeof(char) * (len + 1));
		if (!substr)
			return (NULL);
		while (j < len && s[start + j] != '\0')
		{
			substr[j] = s[start + j];
			j++;
		}
		substr[j] = '\0';
		return (substr);
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*last;

	ptr = (char *)s;
	last = NULL;
	while (1)
	{
		if (*ptr == (char)c)
			last = ptr;
		if (*ptr == '\0')
			break ;
		ptr++;
	}
	return (last);
}

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*cpy;

	len = 0;
	i = 0;
	while (s[len])
	{
		len++;
	}
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (!cpy)
	{
		return (NULL);
	}
	while (i < len)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
