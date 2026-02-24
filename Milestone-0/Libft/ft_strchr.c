/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 03:03:37 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 06:38:18 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strchr() function returns a pointer to the 
	first occurrence of the character c in the string s. */
char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (1)
	{
		if (*ptr == (char)c)
			return (ptr);
		if (*ptr == '\0')
			break ;
		ptr++;
	}
	return (NULL);
}
