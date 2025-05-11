/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:28:05 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/01 10:38:46 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*start_str;
	char	*start_to_find;

	start_str = str;
	start_to_find = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		start_to_find = to_find;
		start_str = str;
		while (*start_to_find && *start_str && *start_str == *start_to_find)
		{
			start_str++;
			start_to_find++;
		}
		if (!*start_to_find)
			return (str);
		str++;
	}
	return ((void *)0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "This is a simple string";
	char	*sub_str;
	sub_str = ft_strstr(str, "simple");
	if (sub_str != (void *)0)
		strncpy(sub_str, "sample", 6);
	printf("str = %s\n", str);
	printf("sub_str = %s\n", sub_str);
	return (0);
}
*/
