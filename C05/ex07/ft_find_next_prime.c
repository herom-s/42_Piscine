/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:00:08 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 20:22:37 by hermarti         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = nb;
	while (!ft_is_prime(next_prime))
	{
		next_prime++;
	}
	return (next_prime);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(90));
	return (0);
}
*/
