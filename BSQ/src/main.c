/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 00:43:12 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/07 13:43:02 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_map.h"
#include "../inc/ft_square.h"
#include "../inc/ft_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void	ft_process_map_and_print(const char *filename)
{
	t_map	*map;
	t_sqr	*sq;

	map = ft_populate_map(filename);
	if (!map)
	{
		ft_putstr("map error\n");
		return ;
	}
	sq = ft_find_sqr(map, map->x_len, map->y_len);
	if (sq && sq->length > 0)
	{
		ft_fill_map_sqr(map, sq);
		ft_print_map(map);
		ft_delete_sqr(sq);
	}
	else
	{
		ft_putstr("map error\n");
	}
	ft_delete_map(map);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		ft_process_map_and_print(0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_process_map_and_print(argv[i]);
			if (i + 1 < argc)
				ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
