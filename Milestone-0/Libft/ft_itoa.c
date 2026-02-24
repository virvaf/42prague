/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 09:10:32 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 09:12:37 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Allocates memory (using malloc(3)) and returns
	a string representing the integer received as an
	argument. Negative numbers must be handled. */
static int	get_length(long number)
{
	int	length;

	length = 0;
	if (number <= 0)
	{
		length++;
		number = -number;
	}
	while (number > 0)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*string;
	long	number;
	int		length;
	int		start;

	number = n;
	start = 0;
	length = get_length(n);
	string = (char *)malloc(length + 1);
	if (!string)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -(long) n;
		start++;
	}
	string[length] = '\0';
	while (length > start)
	{
		string[--length] = (number % 10) + '0';
		number = number / 10;
	}
	return (string);
}
