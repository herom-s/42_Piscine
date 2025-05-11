/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:29:54 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/07 13:46:23 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SQUARE_H
# define FT_SQUARE_H
# include "ft_map.h"

typedef struct s_sqr
{
	int	x;
	int	y;
	int	length;
}		t_sqr;

t_sqr	*ft_create_sqr(void);
void	ft_delete_sqr(t_sqr *sqr);
void	ft_set_sqr(t_sqr *str, int new_x, int new_y, int length);
void	ft_fill_map_sqr(t_map *map, t_sqr *sqr);
t_sqr	*ft_find_sqr(t_map *map, int x_max, int y_max);
int		**ft_create_mat(int n_rows, int n_cols);
t_sqr	*ft_cmp_pos_sqr(t_sqr *sqr1, t_sqr *sqr2);
t_sqr	*ft_cmp_sqr(t_sqr *sqr1, t_sqr *sqr2);
void	ft_free_matrix(int **matrix, int n_rows);
#endif
