/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:20:28 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 11:47:05 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (res * res <= nb)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(6));
	printf("%d\n", ft_sqrt(8));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(10));
}
*/
