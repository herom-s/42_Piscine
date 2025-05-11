/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <hermarti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:05:03 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/23 11:34:24 by hermarti         ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (ft_is_lowercase(*str))
		{
			*str -= 32;
		}
		str++;
	}
	str = temp;
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "abcde";
	char	str2[] = "AfkGl";
	printf("str1 = %s str2 = %s\n", str1, str2);
	printf("str1_return_upcase = %s ", ft_strupcase(str1));
	printf("str2_return_upcase = %s\n", ft_strupcase(str2));
	printf("str1 = %s str2 = %s\n", str1, str2);
	return (0);
}
*/
