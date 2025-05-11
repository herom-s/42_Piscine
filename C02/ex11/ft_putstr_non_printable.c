/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:04:51 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/03 14:57:52 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_to_hex(unsigned char num, unsigned char res[2])
{
	unsigned char	*hex;

	hex = (unsigned char *) "0123456789abcdef";
	res[0] = hex[num / 16];
	res[1] = hex[num % 16];
}

int	ft_is_printable(unsigned char c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	res[2];

	while (*str)
	{
		if (!ft_is_printable(*str))
		{
			ft_putchar('\\');
			ft_to_hex((unsigned char)*str, res);
			ft_putchar(res[0]);
			ft_putchar(res[1]);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
int	main(void)
{
	char	src[] = "Oi\n voce esta bem";

	ft_putstr_non_printable(src);
	return (0);
}
