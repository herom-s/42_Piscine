/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:45:46 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/22 15:14:53 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!ft_is_numeric(*str++))
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "12345";
	str2 = "12a45";

	printf("str1 = %s str2 = %s\n", str1, str2);
	printf("str1_is_numeric = %d ", ft_str_is_numeric(str1));
	printf("str2_is_numeric = %d\n", ft_str_is_numeric(str2));
	return (0);	
}
*/
