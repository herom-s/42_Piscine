/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:47:35 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 00:41:04 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_dict.h"
#include "../inc/ft_dict_get_set.h"
#include "../inc/ft_get_lines.h"
#include "../inc/ft_print_error.h"
#include "../inc/ft_source.h"
#include <stdlib.h>

t_dict	*ft_create_dict(unsigned int dict_size)
{
	t_dict	*dict;

	dict = malloc(sizeof(t_dict));
	if (!dict)
		return (NULL);
	dict->source = malloc(dict_size * sizeof(t_source *));
	if (!dict->source)
	{
		free(dict);
		return (NULL);
	}
	dict->dict_size = 0;
	return (dict);
}

void	ft_delete_dict(t_dict *dict)
{
	unsigned int	i;

	if (!dict)
		return ;
	i = 0;
	while (i < dict->dict_size)
	{
		ft_delete_source(dict->source[i]);
		i++;
	}
	free(dict->source);
	free(dict);
}
