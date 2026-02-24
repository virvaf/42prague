/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:36:55 by virva             #+#    #+#             */
/*   Updated: 2025/11/11 20:07:30 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	int z = 9;
// 	printf("%d! = %d\n", z, ft_recursive_factorial(z));
// }