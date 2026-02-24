/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 08:33:19 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 09:13:05 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Allocates memory (using malloc(3)) and returns a
	new string, which is the result of concatenating
	’s1’ and ’s2’. */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	while (*s1)
	{
		*res = *s1;
		res++;
		s1++;
	}
	while (*s2)
	{
		*res = *s2;
		res++;
		s2++;
	}
	*res = '\0';
	return (res);
}
