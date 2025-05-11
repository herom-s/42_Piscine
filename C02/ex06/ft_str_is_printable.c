/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:39:22 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/29 12:20:20 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "A/1aE";
	str2 = "a\n\ts#";
	printf("str1 = %s str2 = %s\n", str1, str2);
	printf("str1_is_printable = %d ", ft_str_is_printable(str1));
	printf("str2_is_printable = %d\n", ft_str_is_printable(str2));
	return (0);	
}
*/
