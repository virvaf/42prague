/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:48:50 by virva             #+#    #+#             */
/*   Updated: 2025/11/11 16:24:29 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// #include <stdio.h>
// int main()
// {
// 	int a = 234;
// 	int b = -32467;
// 	printf("A: %d, B: %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("A: %d, B: %d\n", a, b);
// }