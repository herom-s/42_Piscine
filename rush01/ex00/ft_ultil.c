/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camda-si <camda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:47:46 by camda-si          #+#    #+#             */
/*   Updated: 2025/04/27 21:51:14 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c);
int				ft_print_error(void);
int				ft_is_valid_number(char c);
int				ft_check_valid_str(char *str);
unsigned int	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_error(void)
{
	ft_putchar('E');
	ft_putchar('r');
	ft_putchar('r');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar('\n');
	return (1);
}

int	ft_is_valid_number(char c)
{
	if (c >= '1' && c <= '4')
		return (1);
	return (0);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	ft_check_valid_str(char *str)
{
	while (*str)
	{
		if (!ft_is_valid_number(*str) && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}
