/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:31:14 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/07 16:31:17 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POS_H
# define FT_POS_H

typedef struct s_pos
{
	int	i;
	int	j;
}		t_pos;

t_pos	*ft_create_pos(int x, int y);
void	ft_delete_pos(t_pos *pos);
#endif
