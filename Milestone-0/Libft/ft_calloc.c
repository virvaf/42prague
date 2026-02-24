/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virva <virva@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 07:04:06 by virva             #+#    #+#             */
/*   Updated: 2025/12/30 07:24:08 by virva            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The calloc() function allocates memory for an array of 
	nmemb elements of size bytes each and returns a pointer
    to the allocated memory.  The memory is set to zero.  
	If nmemb or size is 0, then calloc()  returns  a  unique
    pointer value that can later be successfully passed to free(). */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total;
	size_t			i;
	unsigned char	*zbyte;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	zbyte = (unsigned char *)ptr;
	i = 0;
	while (i < total)
	{
		zbyte[i] = 0;
		i++;
	}
	return (ptr);
}
