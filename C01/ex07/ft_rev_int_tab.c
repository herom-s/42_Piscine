/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:22:19 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/21 12:55:19 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= size / 2)
	{
		ft_swap(&tab[i], &tab[size - i]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5];
	int	i;

	i = 0;
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	while (i < 2)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	i = 0;
	ft_rev_int_tab(tab, 2);
	while (i < 2)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
