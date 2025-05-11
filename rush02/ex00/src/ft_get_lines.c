/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:03:59 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 01:04:00 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../inc/ft_get_lines.h"

static char	**ft_realloc_lines(char **lines, unsigned int *capacity)
{
	char			**new_lines;
	unsigned int	new_capacity;
	unsigned int	i;

	new_capacity = *capacity * 2;
	new_lines = malloc(new_capacity * sizeof(char *));
	if (!new_lines)
		return (0);
	i = 0;
	while (i < *capacity)
	{
		new_lines[i] = lines[i];
		i++;
	}
	free(lines);
	*capacity = new_capacity;
	return (new_lines);
}

static t_file_lines	*ft_init_file_data(unsigned int *capacity)
{
	t_file_lines	*file_data;

	*capacity = 8;
	file_data = malloc(sizeof(t_file_lines));
	if (!file_data)
		return (0);
	file_data->line = malloc(*capacity * sizeof(char *));
	if (!file_data->line)
	{
		free(file_data);
		return (0);
	}
	file_data->file_size = 0;
	return (file_data);
}

static int	ft_process_line(t_file_lines *file_data, unsigned int *count,
		unsigned int *cap, int fd)
{
	char			*line;
	unsigned int	line_size;
	unsigned int	len;

	line_size = MAX_LINE_SIZE;
	line = malloc(line_size);
	if (!line)
		return (0);
	len = ft_read_line(fd, &line, &line_size);
	if (ft_is_end_of_file(len, &line))
		return (0);
	if (*count >= *cap)
	{
		file_data->line = ft_realloc_lines(file_data->line, cap);
		if (!file_data->line)
			return (0);
	}
	file_data->line[(*count)++] = line;
	return (1);
}

t_file_lines	*ft_get_lines(int fd)
{
	t_file_lines	*file_data;
	unsigned int	count;
	unsigned int	cap;

	file_data = ft_init_file_data(&cap);
	if (!file_data)
		return (0);
	count = 0;
	while (ft_process_line(file_data, &count, &cap, fd))
		;
	file_data->file_size = count;
	return (file_data);
}
