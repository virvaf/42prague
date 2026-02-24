/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:31:35 by fvirva            #+#    #+#             */
/*   Updated: 2025/11/11 17:38:36 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

// #include <stdio.h>

// // Example condition function: 
// // returns 1 if the string starts with 'a', else 0
// int starts_with_a(char *str)
// {
//     if (str[0] == 'a' || str[0] == 'A')
//         return 1;
//     return 0;
// }

// // Declaration of ft_count_if (you’ll define it separately)
// int ft_count_if(char **tab, int (*f)(char*));

// int main(void)
// {
//     char *words[] = {"apple", "banana", "avocado", "cherry", 0};

//     int count = ft_count_if(words, &starts_with_a);

//     printf("Number of words starting with 'a': %d\n", count);

//     return 0;
// }