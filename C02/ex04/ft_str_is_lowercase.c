/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:48:28 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/22 15:14:36 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_is_lowercase(*str++))
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "abcde";
	str2 = "aB5/#";
	printf("str1 = %s str2 = %s\n", str1, str2);
	printf("str1_is_lowercase = %d ", ft_str_is_lowercase(str1));
	printf("str2_is_lowercase = %d\n", ft_str_is_lowercase(str2));
	return (0);	
}
*/
