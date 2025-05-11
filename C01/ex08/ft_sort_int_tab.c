/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:57:44 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/01 19:34:42 by hermarti         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5];
	int	i;

	i = 0;
	tab[0] = 2;
	tab[1] = 4;
	tab[2] = 1;
	tab[3] = 5;
	tab[4] = 3;
	while (i < 5)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	i = 0;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
