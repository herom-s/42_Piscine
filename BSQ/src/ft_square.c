/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:33:03 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/07 16:33:06 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_square.h"
#include <stdlib.h>

t_sqr	*ft_create_sqr(void)
{
	t_sqr	*sqr;

	sqr = (t_sqr *)malloc(sizeof(t_sqr));
	sqr->x = -1;
	sqr->y = -1;
	sqr->length = 0;
	return (sqr);
}

void	ft_delete_sqr(t_sqr *sqr)
{
	if (!sqr)
		return ;
	free(sqr);
	sqr = 0;
}

void	ft_fill_map_sqr(t_map *map, t_sqr *sqr)
{
	int	x;
	int	y;

	x = sqr->x - sqr->length + 1;
	while (x <= sqr->x)
	{
		y = sqr->y - sqr->length + 1;
		while (y <= sqr->y)
		{
			map->val[x][y] = map->fill;
			y++;
		}
		x++;
	}
}

void	ft_set_sqr(t_sqr *sqr, int new_x, int new_y, int length)
{
	sqr->length = length;
	sqr->x = new_x;
	sqr->y = new_y;
}
