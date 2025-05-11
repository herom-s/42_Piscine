/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:42:47 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/30 10:47:12 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "Hello";
	char	str1[] = " ";
	char	str2[] = "";

	printf("ft_strlen: str = %s str_len = %d\n", str, ft_strlen(str));	
	printf("ft_strlen: str1 = %s str_len = %d\n", str1, ft_strlen(str1));	
	printf("ft_strlen: str2 = %s str_len = %d\n", str2, ft_strlen(str2));
	printf("strlen: str = %s str_len = %lu\n", str, strlen(str));	
	printf("strlen: str1 = %s str_len = %lu\n", str1, strlen(str1));	
	printf("strlen: str2 = %s str_len = %lu\n", str2, strlen(str2));
	return (0);
}
*/
