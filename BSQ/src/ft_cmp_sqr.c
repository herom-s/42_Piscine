/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_sqr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:48:35 by thaperei          #+#    #+#             */
/*   Updated: 2025/05/07 17:13:32 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_square.h"

static int	ft_cmp_sqr_check(const t_sqr *a, const t_sqr *b)
{
	if (a->length > b->length)
		return (+1);
	if (a->length < b->length)
		return (-1);
	if (a->x - a->length + 1 < b->x - b->length + 1)
		return (+1);
	if (a->x - a->length + 1 > b->x - b->length + 1)
		return (-1);
	if (a->y - a->length + 1 < b->y - b->length + 1)
		return (+1);
	if (a->y - a->length + 1 > b->y - b->length + 1)
		return (-1);
	return (0);
}

t_sqr	*ft_cmp_sqr(t_sqr *a, t_sqr *b)
{
	if (ft_cmp_sqr_check(a, b) >= 0)
		return (a);
	return (b);
}
