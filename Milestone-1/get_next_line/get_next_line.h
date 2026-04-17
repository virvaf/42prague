/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:29:41 by virva             #+#    #+#             */
/*   Updated: 2026/04/17 18:17:26 by fvirva           ###   ########.fr       */
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
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s);

#endif