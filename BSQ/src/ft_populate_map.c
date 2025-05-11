/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:17:03 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/07 08:19:15 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_get_lines.h"
#include "../inc/ft_map.h"
#include "../inc/ft_string.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	parse_map_info(t_map **map, char *first_line, char *first_map_line)
{
	int	k;
	int	height;
	int	width;

	k = 0;
	height = 0;
	while (first_line[k] >= '0' && first_line[k] <= '9')
		height = height * 10 + (first_line[k++] - '0');
	if (!first_line[k] || !first_line[k + 1] || !first_line[k + 2])
		return (0);
	width = ft_strlen(first_map_line);
	*map = ft_create_map(height, width);
	if (!*map)
		return (0);
	(*map)->empty = first_line[k];
	(*map)->obstacle = first_line[k + 1];
	(*map)->fill = first_line[k + 2];
	return (1);
}

int	fill_map_val(t_map **map, t_file_lines *lines)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < (*map)->x_len)
	{
		(*map)->val[i] = malloc((*map)->y_len + 1);
		if (!(*map)->val[i])
			return (ft_delete_map_val(*map), (*map)->val = 0, 0);
		j = 0;
		while (j < (*map)->y_len)
		{
			(*map)->val[i][j] = lines->line[i + 1][j];
			j++;
		}
		(*map)->val[i][j] = '\0';
		i++;
	}
	return (1);
}

int	ft_fill_map(t_map **map_ptr, t_file_lines *lines)
{
	if (lines->file_size < 2)
		return (0);
	if (ft_strlen(lines->line[1]) == 0)
		return (0);
	if (!parse_map_info(map_ptr, lines->line[0], lines->line[1]))
		return (0);
	if (!ft_validate_map(*map_ptr, lines))
	{
		ft_delete_map(*map_ptr);
		return (0);
	}
	if (!fill_map_val(map_ptr, lines))
	{
		ft_delete_map(*map_ptr);
		return (0);
	}
	return (1);
}

t_map	*ft_populate_map(const char *filename)
{
	int				fd;
	t_map			*map;
	t_file_lines	*lines;

	map = 0;
	if (filename == 0)
		fd = 0;
	else
		fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	lines = ft_get_lines(fd);
	if (fd != 0)
		close(fd);
	if (!lines)
		return (0);
	if (!ft_fill_map(&map, lines))
	{
		ft_delete_file_lines(lines);
		return (0);
	}
	ft_delete_file_lines(lines);
	return (map);
}
