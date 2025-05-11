/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:34:11 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/30 10:03:03 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	str1[] = "apple";
	char	str2[] = "banana";

	printf("str1 = %s\nstr2 = %s \n", str1, str2);
	printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
	printf("strcmp(str2, str1) = %d\n", strcmp(str2, str1));
	printf("strcmp(str1, str1) = %d\n", strcmp(str1, str1));
	printf("ft_strcmp(str1, str2) = %d\n", ft_strcmp(str1, str2));
	printf("ft_strcmp(str2, str1) = %d\n", ft_strcmp(str2, str1));
	printf("ft_strcmp(str1, str1) = %d\n", ft_strcmp(str1, str1));
	return (0);
}
*/
