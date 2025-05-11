/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:52:01 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/30 13:15:42 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (src_len);
}
int	main(void)
{
    char	*s = "Hello World";
    char	buf1[12], buf2[12];
   
    printf("str=%zu\n", strlcpy(buf1, s, 0));
    printf("ft_str=%u\n", ft_strlcpy(buf2, s, 0));
    printf("buf1=%s\nbuf2=%s\n", buf1, buf2);
    return (0);
}
