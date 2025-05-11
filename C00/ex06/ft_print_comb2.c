/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:35:11 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/28 18:00:06 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putdigits(char one, char two)
{
	ft_putchar(one);
	ft_putchar(two);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 100)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_putdigits('0' + num1 / 10, '0' + num1 % 10);
			ft_putchar(' ');
			ft_putdigits('0' + num2 / 10, '0' + num2 % 10);
			if (num1 != 98)
			{
				ft_putdigits(',', ' ');
			}
			num2++;
		}
		num1++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
}
*/
