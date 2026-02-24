/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:16:58 by fvirva            #+#    #+#             */
/*   Updated: 2025/11/11 17:23:53 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <stdio.h>

// void	ft_putnbr(int nb)
// {
// 	printf("%d\n", nb);
// }

// int main()
// {
// 	int a[] = { 1, 2, 3, 4, 87, 9564, 488751, 427441 };
// 	ft_foreach(a, 8, &ft_putnbr);
// 	return 0;
// }