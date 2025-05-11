/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:49:23 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/30 10:39:34 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i != n)
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
	char str[][5] = {"R2D2", "C3PO", "R2A6" };
	int	n;

	n = 0;
	printf("Looking for R2 astromech droids...\n");
	while (n < 3)
	{
		if (ft_strncmp(str[n], "R2xx", 2) == 0)
			printf("ft_strncmp: Found %s\n", str[n]);
		if (strncmp(str[n], "R2xx", 2) == 0)
			printf("strncmp: Found %s\n", str[n]);
		n++;
	}
	return (0);
}
*/
