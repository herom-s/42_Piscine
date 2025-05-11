/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:12:59 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/07 13:41:58 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H
# define SIZE_BUFFER 1
# include "../inc/ft_get_lines.h"

typedef struct s_map
{
	char			**val;
	unsigned int	x_len;
	unsigned int	y_len;
	char			empty;
	char			obstacle;
	char			fill;
}					t_map;

t_map				*ft_create_map(unsigned int x_len, unsigned int y_len);
void				ft_delete_map(t_map *map);
void				ft_delete_map_val(t_map *map);
t_map				*ft_populate_map(const char *filename);
void				ft_print_map(t_map *map);
int					ft_validate_map(t_map *map, t_file_lines *lines);
#endif
