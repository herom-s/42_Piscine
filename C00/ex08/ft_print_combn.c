/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:24:41 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/20 10:32:24 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_print_combntr(int n, char l_digi)
{
	char digi;

	digi = '0';
        if (l_digi == '0')
        {
                return;
        }

        while (digi <= l_digi)
        {
		ft_putchar(digi);
		digi++;
        }

	printf("l_digi = %c\n", l_digi);
	if(n > 1)
	{
        	ft_print_combntr(n , l_digi - 1);
	}
}

void    ft_print_combn(int n)
{
        ft_print_combntr(n , '9');
}

int     main(void)
{
        ft_print_combn(2);
}
