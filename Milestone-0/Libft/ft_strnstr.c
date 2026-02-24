/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 06:10:27 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 06:53:52 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strnstr() function locates the first occurrence of 
	needle in haystack, where not more than len characters are searched. 
	If needle is an empty string, haystack is returned. 
	If needle is not found within the first len characters, NULL is returned.*/
char	*ft_strnstr(char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	h = 0;
	while (haystack[h] != '\0' && h < len)
	{
		n = 0;
		while ((h + n) < len
			&& haystack[h + n] == needle[n]
			&& needle[n] != '\0')
		{
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)(haystack + h));
		h++;
	}
	return (NULL);
}
