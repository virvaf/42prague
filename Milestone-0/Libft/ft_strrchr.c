/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 03:30:29 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 06:44:49 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strrchr() function returns a pointer to the last
	occurrence of the character c in the string s. */
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
