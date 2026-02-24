/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 07:22:41 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 08:28:54 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The  strdup() function returns a pointer to a new string
	which is a duplicate of the string s. */
char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*cpy;

	len = 0;
	i = 0;
	while (s[len])
	{
		len++;
	}
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (!cpy)
	{
		return (NULL);
	}
	while (i < len)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
