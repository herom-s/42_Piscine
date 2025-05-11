/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camda-si <camda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:21:17 by camda-si          #+#    #+#             */
/*   Updated: 2025/04/27 21:08:25 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_check_rtol(int row, char grid[6][6]);
int		ft_check_ltor(int row, char grid[6][6]);
int		ft_check_utod(int col, char grid[6][6]);
int		ft_check_dtou(int col, char grid[6][6]);
int		ft_check_repeat(int row, int col, char grid[6][6], char num);

int		ft_check_grid(int row, int col, char grid[6][6]);
int		ft_check_full_grid(char grid[6][6]);
int		ft_solve_grid(char grid[6][6], int col, int row);
void	ft_print_solved_grid(char grid[6][6]);

int	ft_check_grid(int row, int col, char grid[6][6])
{
	int	check_col;
	int	check_row;

	check_col = 1;
	check_row = 1;
	if (row == 4)
		check_row = (ft_check_utod(col, grid) && ft_check_dtou(col, grid));
	if (col == 4)
		check_col = (ft_check_ltor(row, grid) && ft_check_rtol(row, grid));
	return (check_col && check_row);
}

int	ft_check_full_grid(char grid[6][6])
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			if (!ft_check_grid(row, col, grid))
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

void	ft_print_solved_grid(char grid[6][6])
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			if (grid[row][col] == 0)
			{
				ft_putchar('.');
			}
			else
			{
				ft_putchar(grid[row][col]);
				if (col != 4)
					ft_putchar(' ');
			}
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	ft_solve_grid(char grid[6][6], int col, int row)
{
	char	num;

	if (row == 5)
		return (ft_check_full_grid(grid));
	if (col == 5)
		return (ft_solve_grid(grid, 1, row + 1));
	if (grid[row][col] != 0)
		return (ft_solve_grid(grid, col + 1, row));
	num = '1';
	while (num <= '4')
	{
		if (ft_check_repeat(row, col, grid, num))
		{
			grid[row][col] = num;
			if (ft_check_grid(row, col, grid))
			{
				if (ft_solve_grid(grid, col + 1, row))
					return (1);
			}
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
