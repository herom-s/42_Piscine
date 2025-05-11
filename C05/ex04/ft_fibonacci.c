/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:56:09 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 11:47:15 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	res;
	int	fib[2];

	i = 1;
	res = 0;
	fib[0] = 0;
	fib[1] = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (fib[index]);
	while (i < index)
	{
		res = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = res;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(10));

}
*/
