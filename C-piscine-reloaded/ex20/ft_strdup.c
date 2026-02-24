/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:31:39 by virva             #+#    #+#             */
/*   Updated: 2025/11/11 16:25:06 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
//     char *src1 = "Hello, world!";
//     char *dup1 = ft_strdup(src1);

//     printf("src1: %s\n", src1);
//     printf("dup1: %s\n", dup1);

//     // check if different memory addresses
//     printf("src1 address: %p\n", (void *)src1);
//     printf("dup1 address: %p\n", (void *)dup1);

//     // modify duplicate and see if src changes
//     dup1[0] = 'h';
//     printf("After modifying dup1:\n");
//     printf("src1: %s\n", src1);
//     printf("dup1: %s\n", dup1);

//     free(dup1); // don't forget to free

//     return 0;
// }