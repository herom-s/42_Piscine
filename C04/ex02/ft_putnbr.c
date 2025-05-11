/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:38:46 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/30 19:27:55 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n <= 9)
	{
		ft_putchar('0' + n);
		return ;
	}
	ft_putnbr(n / 10);
	ft_putnbr(n % 10);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr(-10);
	ft_putchar('\n');
	ft_putnbr(10);
	ft_putchar('\n');
	ft_putnbr(-300);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
}
*/
