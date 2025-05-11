/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:24:28 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 23:46:32 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num_times;
	int	result;

	num_times = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (num_times < power)
	{
		result *= nb;
		num_times++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(10, 0));
	printf("%d\n", ft_iterative_power(10, -1));
	printf("%d\n", ft_iterative_power(10, 3));
	return (0);
}
*/
