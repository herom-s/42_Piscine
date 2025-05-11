/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 07:42:43 by wsilveir          #+#    #+#             */
/*   Updated: 2025/05/04 22:13:54 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_parse.h"
#include "../inc/ft_treatment_nbr.h"
#include "../inc/ft_string.h"
#include "../inc/ft_populate_dict.h"
#include "../inc/ft_dict.h"
#include <stdio.h>
#include <stdlib.h>

void	free_unit_nbr(char **unit_nbr)
{
	int	i;

	i = 0;
	while (unit_nbr[i])
	{
		free(unit_nbr[i]);
		i++;
	}
	free(unit_nbr);
}

void	free_dict(t_dict *dict)
{
	unsigned int	i;

	i = 0;
	if (dict)
	{
		while (i < dict->dict_size)
		{
			if (dict->source[i])
				free(dict->source[i]);
			i++;
		}
		free(dict->source);
		free(dict);
	}
}

int	process_match(t_dict *dict, char **str, unsigned int *i, int *j)
{
	if (ft_strcmp(dict->source[*i]->key, str[*j]) == 0)
	{
		ft_putstr(dict->source[*i]->value);
		ft_putchar(' ');
		(*j)++;
		*i = 0;
		return (1);
	}
	return (0);
}

int	handle_zero_case(char **str, int *j)
{
	if (str[*j][0] == '0' && str[*j][1] != '\0')
	{
		(*j)++;
		return (1);
	}
	return (0);
}

int	ft_parse(t_dict *dict, char **str)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (dict == 0)
		return (0);
	while (i < dict->dict_size && str[j] != 0)
	{
		if (process_match(dict, str, &i, &j))
			continue ;
		if (handle_zero_case(str, &j))
			continue ;
		i++;
	}
	free_unit_nbr(str);
	free_dict(dict);
	return (1);
}
