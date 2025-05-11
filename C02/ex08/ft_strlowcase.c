/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <hermarti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:51:27 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/23 11:36:05 by hermarti         ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (ft_is_uppercase(*str))
		{
			*str += 32;
		}
		str++;
	}
	str = temp;
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "ABCDE";
	char	str2[] = "AfkGl";
	printf("str1 = %s str2 = %s\n", str1, str2);
	printf("str1_return_lowcase = %s ", ft_strlowcase(str1));
	printf("str2_return_lowcase = %s\n", ft_strlowcase(str2));
	printf("str1 = %s str2 = %s\n", str1, str2);
	return (0);
}
*/
