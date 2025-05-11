/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 19:47:47 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 00:22:54 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H
# include "../inc/ft_source.h"

typedef struct s_dict
{
	t_source		**source;
	unsigned int	dict_size;
}					t_dict;

t_dict				*ft_create_dict(unsigned int dict_size);
void				ft_delete_dict(t_dict *dict);
#endif
