/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:45:03 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 12:16:24 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	ft_validate_base(char *base)
{
	char	*start;

	start = base;
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (1);
		start = base;
		start++;
		while (*start)
		{
			if (*start == *base)
				return (1);
			start++;
		}
		base++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			base_len;

	n = nbr;
	base_len = ft_strlen(base);
	if (ft_validate_base(base) || base_len <= 1)
		return ;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < base_len)
	{
		ft_putchar(base[n]);
		return ;
	}
	ft_putnbr_base(n / base_len, base);
	ft_putnbr_base(n % base_len, base);
}
int	main(void)
{
	ft_putnbr_base(2, "011");
	ft_putchar('\n');
	ft_putnbr_base(-100, "01");
	ft_putchar('\n');
	ft_putnbr_base(100, "01");
	ft_putchar('\n');
	ft_putnbr_base(255, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(255, "01234567");
	ft_putchar('\n');
	ft_putnbr_base(255, "0123456789a");
	return (0);
}
