/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:01:07 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/21 12:18:01 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_div;
	int	tmp_mod;

	tmp_div = *a / *b;
	tmp_mod = *a % *b;
	*a = tmp_div;
	*b = tmp_mod;
}
/*
int     main(void)
{
        int     a;
        int     b;

        a = 10;
        b = 3;
        printf("a=%d b=%d ", a, b);
        ft_ultimate_div_mod(&a, &b);
        printf("div=%d mod=%d\n", a, b);
        return (0);
}
*/
