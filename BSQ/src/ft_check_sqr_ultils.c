/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sqr_ultils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:40:37 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/07 17:15:02 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_square.h"
#include "../inc/ft_string.h"
#include <stdlib.h>
#include <unistd.h>

int	**ft_create_mat(int n_rows, int n_cols)
{
	int	**matrix;
	int	i;

	i = 0;
	matrix = malloc(sizeof(int *) * n_rows);
	if (!matrix)
	{
		ft_putstr("Error\n");
		exit(1);
	}
	while (i < n_rows)
		matrix[i++] = malloc(sizeof(int) * n_cols);
	return (matrix);
}

void	ft_free_matrix(int **matrix, int n_rows)
{
	int	i;

	if (!matrix)
		return ;
	i = 0;
	while (i < n_rows)
	{
		if (matrix[i])
		{
			free(matrix[i]);
		}
		i++;
	}
	free(matrix);
}
