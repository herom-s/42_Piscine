/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:00:36 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/23 11:29:48 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*str1;
	char	str2[40];
	char	str3[40];

	str1 = "Sample string";
	printf("fstr2: %s\n", ft_strcpy(str2, str1));
	printf("fstr3: %s\n", ft_strcpy(str3, "copy successful"));
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return (0);
}
*/
