/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 07:25:53 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 08:27:04 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Allocates memory (using malloc(3)) and returns a
	substring from the string ’s’.
	The substring starts at index ’start’ and has a
	maximum length of ’len’. */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (s[start] != '\0')
	{
		if (ft_strlen(s) - start < len)
			len = ft_strlen(s) - start;
		substr = (char *)malloc(sizeof(char) * (len + 1));
		if (!substr)
			return (NULL);
		while (j < len && s[start + j] != '\0')
		{
			substr[j] = s[start + j];
			j++;
		}
		substr[j] = '\0';
		return (substr);
	}
	return (NULL);
}
