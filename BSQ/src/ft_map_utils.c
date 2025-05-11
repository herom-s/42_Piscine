/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:17:07 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/07 10:18:32 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_get_lines.h"
#include "../inc/ft_map.h"
#include "../inc/ft_string.h"

int	ft_validate_map(t_map *map, t_file_lines *lines)
{
	unsigned int	i;
	unsigned int	j;
	char			c;

	i = 0;
	if (lines->file_size - 1 != map->x_len)
		return (0);
	while (i < map->x_len)
	{
		if (ft_strlen(lines->line[i + 1]) != map->y_len)
			return (0);
		j = 0;
		while (j < map->y_len)
		{
			c = lines->line[i + 1][j];
			if (c != map->empty && c != map->obstacle)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
