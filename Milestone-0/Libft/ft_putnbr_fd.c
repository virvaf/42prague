/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 09:28:20 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 09:29:07 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Outputs the integer ’n’ to the specified file
	descriptor. */
void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	ft_putchar_fd((number % 10) + '0', fd);
}
