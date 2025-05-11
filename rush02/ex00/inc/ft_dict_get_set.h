/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_get_set.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 07:40:06 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 07:40:08 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_GET_SET_H
# define FT_DICT_GET_SET_H
# include "../inc/ft_dict.h"

char	*ft_get_dict_key(t_dict *dict, unsigned int i);
char	*ft_get_dict_value(t_dict *dict, unsigned int i);
int		ft_set_dict_key(t_dict *dict, char *key, unsigned int i);
int		ft_set_dict_value(t_dict *dict, char *value, unsigned int i);

#endif
