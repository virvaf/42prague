/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 00:53:39 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 06:26:29 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The bzero() function erases the data in the 
	n bytes of the memory starting 
	at the location pointed to by s, 
	by writing zeros (bytes containing '\0') to that area. */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
