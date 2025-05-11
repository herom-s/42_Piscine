/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:21:04 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/28 17:39:42 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[20] = "Hello";
	char	str2[6] = "World";
	char	str3[20] = "Chaos";
	char	str4[7] = "Moldru";

	printf("str1 = %s\nstr2 = %s\n", str1, str2);
	printf("res_strcat = %s\n", strcat(str1, str2));
	printf("str3 = %s\nstr4 = %s\n", str3, str4);
	printf("res_ft_strcat = %s\n", ft_strcat(str3, str4));
	return (0);
}
*/
