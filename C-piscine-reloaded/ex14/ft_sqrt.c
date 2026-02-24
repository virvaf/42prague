/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:55:07 by virva             #+#    #+#             */
/*   Updated: 2025/11/11 16:24:40 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int			high;
	int			low;
	int			mid;
	long long	sq;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	low = 1;
	high = nb / 2;
	while (low <= high)
	{
		mid = (low + high) / 2;
		sq = (long long)mid * mid;
		if (sq == nb)
			return (mid);
		else if (sq < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
// 	int a = INT_MAX;
// 	int b = -456;
// 	int c = 1000000;
// 	int d = 0;
// 	int e = 1;
// 	printf("%d\n", ft_sqrt(a));
// 	printf("%d\n", ft_sqrt(b));
// 	printf("%d\n", ft_sqrt(c));
// 	printf("%d\n", ft_sqrt(d));
// 	printf("%d\n", ft_sqrt(e));
// }