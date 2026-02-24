/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:45:22 by virva             #+#    #+#             */
/*   Updated: 2025/11/11 16:25:09 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	long	size;
	int		i;
	int		*arr;

	if (min >= max)
		return (NULL);
	size = (long)max - (long)min;
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// #include <stdio.h>
// void test_ft_range(int min, int max) {
//     int *arr = ft_range(min, max);
//     if (!arr) {
//         printf("ft_range(%d, %d) -> NULL\n", min, max);
//         return;
//     }
//     printf("ft_range(%d, %d) -> ", min, max);
//     for (int i = 0; i < max - min; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     free(arr);
// }

// int main() {
//     // Test 1: Normal range
//     test_ft_range(1, 5); // Expected: 1 2 3 4

//     // Test 2: Negative to positive
//     test_ft_range(-3, 2); // Expected: -3 -2 -1 0 1

//     // Test 3: Single number (min == max-1)
//     test_ft_range(10, 11); // Expected: 10

//     // Test 4: Invalid range (min == max)
//     test_ft_range(5, 5); // Expected: NULL

//     // Test 5: Invalid range (min > max)
//     test_ft_range(8, 3); // Expected: NULL
// }