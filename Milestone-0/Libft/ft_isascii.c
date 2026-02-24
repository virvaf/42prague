/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:56:40 by fvirva            #+#    #+#             */
/*   Updated: 2025/12/30 06:29:38 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  This function checks for an ASCII character, 
	returning 1 if the value belongs inside the ASCII table
	and 0 if it doesn't. */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
