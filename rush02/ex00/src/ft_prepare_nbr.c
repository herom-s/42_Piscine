/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepare_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:57:46 by wsilveir          #+#    #+#             */
/*   Updated: 2025/05/04 03:02:20 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../inc/ft_string.h"
#include <stdio.h>

void	ft_insert_unit(char *dest, char digit, int zeros)
{
	int	i;

	i = 0;
	dest[i++] = digit;
	while (--zeros > 0)
		dest[i++] = '0';
	dest[i] = '\0';
}

static int	get_position(int size_nbr, int i)
{
	return (size_nbr - i);
}

static void	process_two_digit_case(char **unit_nbr, char *nbr, int *i, int *j)
{
	if (nbr[*i] == '1' && nbr[*i + 1] >= '0' && nbr[*i + 1] <= '9')
	{
		unit_nbr[*j] = (char *)malloc(3 * sizeof(char));
		unit_nbr[*j][0] = nbr[*i];
		unit_nbr[*j][1] = nbr[*i + 1];
		unit_nbr[*j][2] = '\0';
		(*j)++;
		(*i) += 2;
	}
	else if (nbr[*i] >= '2' && nbr[*i] <= '9')
	{
		unit_nbr[*j] = (char *)malloc(3 * sizeof(char));
		unit_nbr[*j][0] = nbr[*i];
		unit_nbr[*j][1] = '0';
		unit_nbr[*j][2] = '\0';
		(*j)++;
		if (nbr[*i + 1] != '0')
		{
			unit_nbr[*j] = (char *)malloc(2 * sizeof(char));
			unit_nbr[*j][0] = nbr[*i + 1];
			unit_nbr[*j][1] = '\0';
			(*j)++;
		}
		(*i) += 2;
	}
}

static void	single_digit(char **unit_nbr, char *nbr, int *i, int *j, int pos)
{
	unit_nbr[*j] = (char *)malloc(2 * sizeof(char));
	unit_nbr[*j][0] = nbr[*i];
	unit_nbr[*j][1] = '\0';
	(*j)++;
	if (pos > 1)
	{
		unit_nbr[*j] = (char *)malloc((pos + 1) * sizeof(char));
		ft_insert_unit(unit_nbr[*j], '1', pos);
		(*j)++;
	}
	(*i)++;
}

char	**ft_prepare_nbr(char *nbr)
{
	int		i;
	int		j;
	int		pos;
	int		size_nbr;
	char	**unit_nbr;

	i = 0;
	j = 0;
	size_nbr = ft_strlen(nbr);
	unit_nbr = (char **)malloc((size_nbr * 2 + 1) * sizeof(char *));
	if (!unit_nbr)
		return (NULL);
	while (i < size_nbr)
	{
		pos = get_position(size_nbr, i);
		if (pos == 2 && (nbr[i] == '1' || (nbr[i] >= '2' && nbr[i] <= '9')))
			process_two_digit_case(unit_nbr, nbr, &i, &j);
		else if (nbr[i] == '0')
			i++;
		else
			single_digit(unit_nbr, nbr, &i, &j, pos);
	}
	unit_nbr[j] = 0;
	free(nbr);
	return (unit_nbr);
}
