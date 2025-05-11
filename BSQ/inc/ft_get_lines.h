/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lines.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:52:45 by hermarti          #+#    #+#             */
/*   Updated: 2025/05/06 13:28:46 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_LINES_H
# define FT_GET_LINES_H

# define MAX_LINE_SIZE 1024
# define CHAR_BUFF_SIZE 1

typedef struct s_file_lines
{
	char			**line;
	unsigned int	file_size;
}					t_file_lines;

t_file_lines		*ft_get_lines(int fd);

void				*ft_realloc_line(char *line, unsigned int *line_size);
unsigned int		ft_read_line(int fd, char **line, unsigned int *line_size);
int					ft_is_end_of_file(unsigned int len, char **line);
void				ft_delete_file_lines(t_file_lines *lines);

#endif
