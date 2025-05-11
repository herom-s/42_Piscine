/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:16:38 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/07 16:17:51 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_pos.h"
#include <stdlib.h>

t_pos	*ft_create_pos(int i, int j)
{
	t_pos	*pos;

	pos = malloc(sizeof(t_pos));
	pos->i = i;
	pos->j = j;
	return (pos);
}

void	ft_delete_pos(t_pos *pos)
{
	if (!pos)
		return ;
	free(pos);
	pos = 0;
}
