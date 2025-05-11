/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:05:42 by wsilveir          #+#    #+#             */
/*   Updated: 2025/05/04 05:57:31 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../inc/ft_string.h"
#include "../inc/ft_validate_string.h"
#include "../inc/ft_treatment_nbr.h"

static char	*ft_insert_nbr(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_validate_nbr(char *str)
{
	int		i;
	char	*nbr;
	int		len;

	i = 0;
	len = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[0] == '0' || !ft_is_number(str[i]))
			return (0);
		else
			len++;
		i++;
	}
	if (len != 0)
	{
		nbr = malloc((len + 1) * sizeof(char));
		if (nbr != 0)
			ft_insert_nbr(nbr, str);
		else
			ft_putstr("Failed to allocate memory\n");
		return (nbr);
	}
	return (0);
}
