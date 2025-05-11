/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camda-si <camda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:12:12 by camda-si          #+#    #+#             */
/*   Updated: 2025/04/27 21:44:43 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_zero_grid(char grid[6][6]);
void	ft_remove_space(char *str_nspace, char *str);
void	ft_create_grid(char *map, char grid[6][6]);
int		ft_can_solve_col(char grid[6][6]);
int		ft_can_solve_row(char grid[6][6]);

void	ft_zero_grid(char grid[6][6])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	ft_remove_space(char *str_nspace, char *str)
{
	while (*str)
	{
		if (*str != ' ')
		{
			*str_nspace = *str;
			str_nspace++;
		}
		str++;
	}
	*str_nspace = '\0';
}

void	ft_create_grid(char *map, char grid[6][6])
{
	int	idx;
	int	col_up;
	int	col_down;
	int	row_left;
	int	row_right;

	idx = 0;
	col_up = 1;
	col_down = 1;
	row_left = 1;
	row_right = 1;
	while (map[idx])
	{
		if (idx < 4)
			grid[0][col_up++] = map[idx];
		else if (idx >= 4 && idx < 8)
			grid[5][col_down++] = map[idx];
		else if (idx >= 8 && idx < 12)
			grid[row_left++][0] = map[idx];
		else if (idx >= 12 && idx < 16)
			grid[row_right++][5] = map[idx];
		idx++;
	}
}

int	ft_can_solve_col(char grid[6][6])
{
	int	col;
	int	sum;

	col = 1;
	sum = 0;
	while (col < 5)
	{
		sum = 0;
		sum += grid[0][col] - '0';
		sum += grid[5][col] - '0';
		if (sum < 3 || sum > 5)
			return (0);
		col++;
	}
	return (1);
}

int	ft_can_solve_row(char grid[6][6])
{
	int	row;
	int	sum;

	row = 1;
	sum = 0;
	while (row < 5)
	{
		sum = 0;
		sum += grid[row][0] - '0';
		sum += grid[row][5] - '0';
		if (sum < 3 || sum > 5)
			return (0);
		row++;
	}
	return (1);
}
