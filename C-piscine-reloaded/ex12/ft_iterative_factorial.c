/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:00:44 by virva             #+#    #+#             */
/*   Updated: 2025/11/11 20:11:40 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	if (res > 2147483647)
		return (0);
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	int z = 10000;
// 	printf("%d! = %d\n", z, ft_iterative_factorial(z));
// }