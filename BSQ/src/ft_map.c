/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 01:36:31 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/07 08:03:38 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_map.h"
#include "../inc/ft_string.h"
#include <stdlib.h>

t_map	*ft_create_map(unsigned int x_len, unsigned int y_len)
{
	unsigned int	i;
	t_map			*map;

	i = 0;
	map = malloc(sizeof(t_map));
	if (!map)
		return (0);
	map->x_len = x_len;
	map->y_len = y_len;
	map->val = malloc(sizeof(char *) * x_len);
	if (!map->val)
	{
		free(map);
		return (0);
	}
	while (i < x_len)
	{
		map->val[i] = 0;
		i++;
	}
	return (map);
}

void	ft_print_map(t_map *map)
{
	unsigned int	i;

	i = 0;
	while (i < map->x_len)
	{
		ft_putstr(map->val[i]);
		ft_putstr("\n");
		i++;
	}
}

void	ft_delete_map_val(t_map *map)
{
	unsigned int	i;

	i = 0;
	if (!map || !map->val)
		return ;
	while (i < map->x_len)
	{
		free(map->val[i]);
		map->val[i] = 0;
		i++;
	}
	free(map->val);
	map->val = 0;
}

void	ft_delete_map(t_map *map)
{
	if (!map)
		return ;
	ft_delete_map_val(map);
	free(map);
}
