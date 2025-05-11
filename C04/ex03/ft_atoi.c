/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:28:35 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/05 12:58:30 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (ft_is_number(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * signal);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("-23"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
}
*/
