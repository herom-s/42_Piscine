/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:00:36 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/25 14:30:46 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (dest);
	}
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*str1;
	char	str2[40];
	char	str3[40];

	str1 = "To be or not to be";
	printf("fstr2: %s\n", ft_strncpy(str2, str1, 40));
	printf("fstr3: %s\n", ft_strncpy(str3, str2, 5));
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return (0);
}
*/
