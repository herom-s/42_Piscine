/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:32:02 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/19 18:53:24 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int long	n;

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
int	main(void)
{
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(10);
	ft_putchar('\n');
	ft_putnbr(-30);
}
*/
