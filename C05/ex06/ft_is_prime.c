/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:45:03 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 12:04:46 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	mult;

	mult = 2;
	if (nb < 2)
		return (0);
	while (mult <= nb / 2)
	{
		if (nb % mult == 0)
			return (0);
		mult++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	for (int i = 0; i < 100;i++)
	{
		if (ft_is_prime(i))
			printf("%d ", i);
	}
	return (0);
}
*/
