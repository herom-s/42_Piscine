/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:22:05 by wtavares          #+#    #+#             */
/*   Updated: 2025/04/20 19:22:37 by wtavares         ###   ########.fr       */
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
	position ++;
	}
	ft_putchar('\n');
}

void	middle_line(int empty)
{
	int	position;

	position = 1;
	while (position <= empty)
	{
		if (position == 1)
		{
			ft_putchar('B');
		}
		else if (position == empty)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
	position ++;
	}
	ft_putchar('\n');
}

void	base_line(int base)
{	
	int	position;

	position = 1;
	while (position <= base)
	{
		if (position == 1)
		{
			ft_putchar('A');
		}
		else if (position == base)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	position ++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	count;

	if (x <= 0 || y <= 0)
	{
		write(1, "Negative value and zero are not accepted", 27);
	}
	count = 1;
	top_line(x);
	while (count <= y - 2)
	{
		middle_line(x);
		count++;
	}
	if (y >= 2)
		base_line(x);
}
