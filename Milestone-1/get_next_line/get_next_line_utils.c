/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:30:20 by virva             #+#    #+#             */
/*   Updated: 2026/06/19 10:36:28 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

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