/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:27:48 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/20 19:28:32 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top_line(int length)
{
	int	position;

	position = 1;
	while (position <= length)
	{
		if (position == 1)
		{
			ft_putchar('A');
		}
		else if (position == length)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	position++;
	}
	ft_putchar('\n');
}

void	middle_line(int empty)
{
	int	position;

	position = 1;
	while (position <= empty)
	{
		if (position == 1 || position == empty)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
	position++;
	}
	ft_putchar('\n');
}

void	last_line(int base)
{
	int	position;

	position = 1;
	while (position <= base)
	{
		if (position == 1)
		{
			ft_putchar('C');
		}
		else if (position == base)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
	position++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	count;

	if (x <= 0 || y == 0)
	{
		write(1, "Negative value and zero are not accepted", 1);
	}
	count = 1;
	top_line(x);
	while (count <= y - 2)
	{
		middle_line(x);
		count++;
	}
	if (y >= 2)
		last_line(x);
}
