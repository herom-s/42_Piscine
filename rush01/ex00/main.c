/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camda-si <camda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:03:03 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/28 14:40:21 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str);
void			ft_putchar(char c);
int				ft_print_error(void);
int				ft_is_valid_number(char c);
int				ft_check_valid_str(char *str);
void			ft_zero_grid(char grid[6][6]);
void			ft_remove_space(char *str_nspace, char *str);
void			ft_create_grid(char *map, char grid[6][6]);
int				ft_can_solve_col(char grid[6][6]);
int				ft_can_solve_row(char grid[6][6]);
int				ft_solve_grid(char grid[6][6], int col, int row);
void			ft_print_solved_grid(char grid[6][6]);

int	main(int argc, char **argv)
{
	char	grid[6][6];
	char	map[17];

	if (argc != 2)
		return (ft_print_error());
	if (!ft_check_valid_str(argv[1]) || ft_strlen(argv[1]) != 31)
		return (ft_print_error());
	ft_zero_grid(grid);
	ft_remove_space(map, argv[1]);
	if (ft_strlen(map) != 16)
		return (ft_print_error());
	ft_create_grid(map, grid);
	if (!ft_can_solve_col(grid) || !ft_can_solve_row(grid))
		return (ft_print_error());
	if (!ft_solve_grid(grid, 1, 1))
		return (ft_print_error());
	ft_print_solved_grid(grid);
	return (0);
}
