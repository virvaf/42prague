/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 23:55:32 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 06:39:34 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strlcat() function appends the NUL-terminated string src 
	to the end of dst. It will append at most size -
    strlen(dst) - 1 bytes, NUL-terminating the result. */
size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (dst_len < dsize && dst[dst_len])
		dst_len++;
	if (dst_len == dsize)
		return (dsize + src_len);
	i = 0;
	while (src[i] && dst_len + i + 1 < dsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
