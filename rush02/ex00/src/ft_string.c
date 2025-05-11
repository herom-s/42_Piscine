/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:17:43 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 14:11:23 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_string.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*start;
	char	*res;

	res = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!res)
		return (0);
	start = res;
	while (*str)
	{
		*start++ = *str++;
	}
	*start = '\0';
	return (res);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	result;

	count = 0;
	result = 0;
	while (s1[count] != '\0')
	{
		result = s1[count] - s2[count];
		if (result != 0)
			return (result);
		count ++;
	}
	if (s2[count] != '\0')
		result = s1[count] - s2[count];
	return (result);
}
