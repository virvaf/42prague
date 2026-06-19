/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:30:00 by virva             #+#    #+#             */
/*   Updated: 2026/06/19 17:02:08 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char*    stash;
    char            buffer[BUFFER_SIZE + 1];
    ssize_t         bytes_read;
    char*           newline;
    int             newline_len;
    char*           left;
    char*           temp;

    if(fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    if(!stash)
        stash = ft_strdup("");
        
    while(ft_strchr(stash, '\n') == NULL)
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);

        if(bytes_read == -1)
        {
            free(stash);
            stash = NULL;
            return (stash);
        }

        if(bytes_read == 0)
            break;

        buffer[bytes_read] = '\0';

        temp = ft_strjoin(stash, buffer);
        free(stash);
        stash = temp;
    }

    newline = ft_strchr(stash, '\n');
    if(newline)
    {
        newline_len = (newline - stash) + 1;
        temp = ft_substr(stash, 0, newline_len);
        left = ft_substr(stash, newline_len, ft_strlen(stash) - newline_len);
        free(stash);
        stash = left;
        return(temp);
    }
    else
    {
        if(*stash == '\0')
        {
            free(stash);
            stash = NULL;
            return (NULL);
        }
        temp = stash;
        stash = NULL;
        return(temp);
    }
}
