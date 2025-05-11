/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lines_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:49:10 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 00:40:29 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../inc/ft_get_lines.h"

void	*ft_realloc_line(char *line, unsigned int *line_size)
{
	unsigned int	new_size;
	unsigned int	i;
	char			*new_line;

	i = 0;
	new_size = *line_size * 2;
	new_line = malloc(new_size);
	if (!new_line)
		return (NULL);
	while (i < *line_size)
	{
		new_line[i] = line[i];
		i++;
	}
	free(line);
	*line_size = new_size;
	return (new_line);
}

unsigned int	ft_read_line(int fd, char **line, unsigned int *line_size)
{
	unsigned int	i;
	ssize_t			bytes_read;
	char			c;

	i = 0;
	bytes_read = read(fd, &c, CHAR_BUFF_SIZE);
	while (bytes_read > 0)
	{
		if (c == '\n')
			break ;
		if (i >= *line_size - 1)
			*line = ft_realloc_line(*line, line_size);
		(*line)[i++] = c;
		bytes_read = read(fd, &c, CHAR_BUFF_SIZE);
	}
	if (*line)
		(*line)[i] = '\0';
	return (i);
}

int	ft_is_end_of_file(unsigned int len, char **line)
{
	if (len == 0)
	{
		free(*line);
		*line = NULL;
		return (1);
	}
	return (0);
}
