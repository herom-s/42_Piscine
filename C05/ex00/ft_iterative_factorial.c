/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:09:58 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 18:46:44 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	mul_n;
	int	res;

	res = 1;
	mul_n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (mul_n >= 1)
	{
		res *= mul_n;
		mul_n--;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}
*/
