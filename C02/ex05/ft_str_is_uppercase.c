/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:48:28 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/22 15:13:27 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_is_uppercase(*str++))
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "ABCDE";
	str2 = "BAa/#";
	printf("str1 = %s str2 = %s\n", str1, str2);
	printf("str1_is_uppercase = %d ", ft_str_is_uppercase(str1));
	printf("str2_is_uppercase = %d\n", ft_str_is_uppercase(str2));
	return (0);	
}
*/
