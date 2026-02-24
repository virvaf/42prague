/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 09:24:40 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 09:25:26 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Outputs the character ’c’ to the specified file
	descriptor. */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
