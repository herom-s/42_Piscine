/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sqr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 07:57:38 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/07 19:12:50 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_map.h"
#include "../inc/ft_pos.h"
#include "../inc/ft_square.h"
#include <stdlib.h>

int	ft_get_larger_sqr(int **matrix, t_pos p)
{
	int	top;
	int	left;
	int	top_left;
	int	min_neighbor;

	top = matrix[p.i - 1][p.j];
	left = matrix[p.i][p.j - 1];
	top_left = matrix[p.i - 1][p.j - 1];
	if (top <= left && top <= top_left)
		min_neighbor = top;
	else if (left <= top && left <= top_left)
		min_neighbor = left;
	else
		min_neighbor = top_left;
	return (min_neighbor + 1);
}

void	ft_get_sqr(t_sqr *best, t_map *map, int **matrix, t_pos p)
{
	t_sqr	cand;

	if (map->val[p.i][p.j] == map->obstacle)
		matrix[p.i][p.j] = 0;
	else if (p.i == 0 || p.j == 0)
		matrix[p.i][p.j] = 1;
	else
		matrix[p.i][p.j] = ft_get_larger_sqr(matrix, p);
	cand.x = p.i;
	cand.y = p.j;
	cand.length = matrix[p.i][p.j];
	if (ft_cmp_sqr(best, &cand) == &cand)
		ft_set_sqr(best, cand.x, cand.y, cand.length);
}

t_sqr	*ft_find_sqr(t_map *map, int x_max, int y_max)
{
	t_sqr	*best;
	t_pos	*p;
	int		**matrix;

	matrix = ft_create_mat(x_max, y_max);
	best = ft_create_sqr();
	p = ft_create_pos(0, 0);
	while (p->i < x_max)
	{
		p->j = 0;
		while (p->j < y_max)
		{
			ft_get_sqr(best, map, matrix, *p);
			p->j++;
		}
		p->i++;
	}
	ft_delete_pos(p);
	ft_free_matrix(matrix, x_max);
	if (best->length == 0)
	{
		ft_delete_sqr(best);
		return (0);
	}
	return (best);
}
