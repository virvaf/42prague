/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:30:00 by virva             #+#    #+#             */
/*   Updated: 2026/06/16 19:17:17 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    if(fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    static char* stash;
    char buffer[BUFFER_SIZE + 1];

    

    return (NULL);
}
