/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:04:07 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/05 16:44:37 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	ft_validate_base(char *base)
{
	char	*start;

	start = base;
	while (*base)
	{
		if (*base == '-' || *base == '+' || ft_is_space(*base))
			return (1);
		start = base;
		start++;
		while (*start)
		{
			if (*start == *base)
				return (1);
			start++;
		}
		base++;
	}
	return (0);
}

int	ft_to_base10(char *str, char *base)
{
	int	base_len;
	int	result;
	int	power;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	result = 0;
	power = 1;
	i = ft_strlen(str) - 1;
	while (i >= 0 && (str[i] >= ' ' && str[i] <= '~'))
	{
		j = 0;
		while (base[j] && str[i] != base[j])
			j++;
		if (base[j] == '\0')
			return (0);
		result += j * power;
		power *= base_len;
		i--;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	char	digit;
	int		result;
	int		signal;
	int		base_len;

	digit = 0;
	result = 0;
	signal = 1;
	base_len = ft_strlen(base);
	if (ft_validate_base(base) || base_len <= 1)
		return (0);
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			signal *= -1;
	}
	result = ft_to_base10(str, base);
	return (result * signal);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base ("-ff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("1111111111111111111111111111111", "01"));
	printf("%d\n", ft_atoi_base("2147483647","0123456789"));
	printf("%d\n", ft_atoi_base(" ---+--+1234ab567", "01234567abb"));
}
*/
