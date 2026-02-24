/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 21:23:46 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 06:41:26 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The  strlcpy() function copies up to size - 1 characters from
	the NUL-terminated string src to dst, NUL-termi‐nating the result. 
	Return value: length of the attempted string. */
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	char	*d;
	char	*s;
	size_t	len;

	d = dst;
	s = (char *)src;
	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	if (dsize == 0)
		return (len);
	s = (char *)src;
	while (*s && dsize-- > 1)
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (len);
}
