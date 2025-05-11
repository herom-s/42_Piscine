/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_get_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 07:39:26 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 07:39:27 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_dict.h"
#include "../inc/ft_dict_get_set.h"

char	*ft_get_dict_key(t_dict *dict, unsigned int i)
{
	return (dict->source[i]->key);
}

char	*ft_get_dict_value(t_dict *dict, unsigned int i)
{
	return (dict->source[i]->value);
}

int	ft_set_dict_key(t_dict *dict, char *key, unsigned int i)
{
	dict->source[i]->key = key;
	return (1);
}

int	ft_set_dict_value(t_dict *dict, char *value, unsigned int i)
{
	dict->source[i]->value = value;
	return (1);
}
