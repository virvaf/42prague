/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:40:32 by virva             #+#    #+#             */
/*   Updated: 2025/11/11 17:07:53 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n);
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// int main()
// {
// 	ft_is_negative(3);
// 	ft_is_negative(1010);
// 	ft_is_negative(-34);
// 	ft_is_negative(573);
// 	ft_is_negative(000);
// 	ft_is_negative(-234);
// }