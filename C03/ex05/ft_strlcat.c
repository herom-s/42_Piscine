/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:02:31 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/30 10:39:12 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
	{
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}
/*
int	main(void) {
	char	d1[30] = "Hello, ";
	char	d2[30] = "Hello, ";
	char	*src = "world!";
	unsigned int	size = 15;
	printf("ft_strlcat: %u, result: %s\n", ft_strlcat(d1, src, size), d1);
	printf("strlcat:    %lu, result: %s\n", strlcat(d2, src, size), d2);
	return (0);
}
*/
