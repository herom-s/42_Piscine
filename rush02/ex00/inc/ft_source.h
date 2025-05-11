/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 00:04:29 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/04 00:15:49 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOURCE_H
# define FT_SOURCE_H

typedef struct s_source
{
	char	*key;
	char	*value;
}			t_source;

t_source	*ft_create_source(char *key, char *value);
char		*ft_get_source_key(t_source *source);
char		*ft_get_source_value(t_source *source);
void		ft_set_source_value(t_source *source, char *key, char *value);
void		ft_delete_source(t_source *source);
#endif