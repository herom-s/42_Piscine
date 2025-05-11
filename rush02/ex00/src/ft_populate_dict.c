/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate_dict.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:45:33 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 11:18:18 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_dict.h"
#include "../inc/ft_get_lines.h"
#include "../inc/ft_populate_dict.h"
#include "../inc/ft_string.h"
#include "../inc/ft_validate_dict.h"
#include "../inc/ft_validate_string.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static void	ft_split_key_value(char *line, char **key, char **value)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (line[i] == ' ' || line[i] == '\t')
		i++;
	*key = line + i;
	while (line[i] && line[i] != ':')
		i++;
	line[i] = '\0';
	i++;
	while (line[i] == ' ' || line[i] == '\t')
		i++;
	*value = line + i;
	j = i;
	while (line[j] && line[j] != '\n')
		j++;
	line[j] = '\0';
}

static void	ft_free_file_lines(t_file_lines *lines)
{
	unsigned int	i;

	i = 0;
	while (i < lines->file_size)
	{
		free(lines->line[i]);
		i++;
	}
	free(lines->line);
	free(lines);
}

static int	ft_fill_dict(t_dict *dict, t_file_lines *lines)
{
	unsigned int	i;
	char			*key;
	char			*value;

	i = 0;
	while (i < lines->file_size)
	{
		if (!ft_validate_line(lines->line[i]))
			return (0);
		ft_split_key_value(lines->line[i], &key, &value);
		if (!ft_validate_key(key) || !ft_validate_value(value))
			return (0);
		dict->source[i] = ft_create_source(ft_strdup(key), ft_strdup(value));
		if (!dict->source[i])
			return (0);
		i++;
	}
	dict->dict_size = lines->file_size;
	return (1);
}

t_dict	*ft_populate_dict(const char *filename)
{
	int				fd;
	t_dict			*dict;
	t_file_lines	*lines;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	lines = ft_get_lines(fd);
	close(fd);
	if (!lines)
		return (0);
	dict = ft_create_dict(lines->file_size);
	if (!dict)
	{
		ft_free_file_lines(lines);
		return (0);
	}
	if (!ft_fill_dict(dict, lines))
		return (0);
	ft_free_file_lines(lines);
	return (dict);
}
