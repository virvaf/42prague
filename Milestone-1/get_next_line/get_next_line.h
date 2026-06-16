/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:29:41 by virva             #+#    #+#             */
/*   Updated: 2026/06/16 17:51:47 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*   Required libraries   */
# include <unistd.h>
# include <stdlib.h>

/*   get_next_line prototypes   */
char *get_next_line(int fd);

/*   Utils prototypes   */
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

#endif