/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_dict.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 05:53:03 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 13:13:42 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_validate_dict.h"
#include "../inc/ft_validate_string.h"

int	ft_validate_key(char *key)
{
	unsigned int	i;

	i = 0;
	if (!key)
		return (0);
	while (key[i])
	{
		if (!ft_is_number(key[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_validate_value(char *value)
{
	int	i;

	i = 0;
	if (!value)
		return (0);
	while (value[i])
	{
		if (!ft_is_printable(value[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_validate_line(char *line)
{
	if (*line == '\0' || !ft_is_number(*line))
		return (0);
	while (ft_is_number(*line))
		line++;
	while (ft_is_space(*line))
		line++;
	if (*line != ':')
		return (0);
	line++;
	while (ft_is_space(*line))
		line++;
	if (!ft_is_printable(*line))
		return (0);
	while (ft_is_printable(*line))
		line++;
	if (*line != '\n' && *line != '\0')
		return (0);
	return (1);
}
