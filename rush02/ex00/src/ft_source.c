/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 00:07:43 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 00:27:36 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_source.h"
#include <stdlib.h>

t_source	*ft_create_source(char *key, char *value)
{
	t_source	*src;

	src = malloc(sizeof(t_source));
	if (!src)
		return (NULL);
	src->key = key;
	src->value = value;
	return (src);
}

char	*ft_get_source_key(t_source *source)
{
	return (source->key);
}

char	*ft_get_source_value(t_source *source)
{
	return (source->value);
}

void	ft_set_source_value(t_source *source, char *key, char *value)
{
	source->key = key;
	source->value = value;
}

void	ft_delete_source(t_source *source)
{
	if (!source)
		return ;
	free(source->key);
	free(source->value);
	free(source);
}
