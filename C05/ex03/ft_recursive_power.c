/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:44:35 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 10:55:46 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(10, 0));
	printf("%d\n", ft_recursive_power(10, -1));
	printf("%d\n", ft_recursive_power(10, 3));
	return (0);
}
*/
