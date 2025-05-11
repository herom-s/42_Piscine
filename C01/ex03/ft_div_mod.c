/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:31:21 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/21 11:38:46 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 4;
	b = 3;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a=%d b=%d div=%d mod=%d\n", a, b, div, mod);

	return (0);
}
*/
