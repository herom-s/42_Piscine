/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camda-si <camda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:58:12 by camda-si          #+#    #+#             */
/*   Updated: 2025/04/27 20:53:54 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_rtol(int row, char grid[6][6]);
int	ft_check_ltor(int row, char grid[6][6]);
int	ft_check_utod(int col, char grid[6][6]);
int	ft_check_dtou(int col, char grid[6][6]);
int	ft_check_repeat(int row, int col, char grid[6][6], char num);

int	ft_check_rtol(int row, char grid[6][6])
{
	int	max_height;
	int	visibility;
	int	i;

	max_height = 0;
	visibility = 0;
	i = 4;
	while (i >= 1)
	{
		if (grid[row][i] > max_height && grid[row][i] != 0)
		{
			max_height = grid[row][i];
			visibility++;
		}
		i--;
	}
	return (visibility == grid[row][5] - '0');
}

int	ft_check_ltor(int row, char grid[6][6])
{
	int	max_height;
	int	visibility;
	int	i;

	max_height = 0;
	visibility = 0;
	i = 1;
	while (i < 5)
	{
		if (grid[row][i] > max_height && grid[row][i] != 0)
		{
			max_height = grid[row][i];
			visibility++;
		}
		i++;
	}
	return (visibility == grid[row][0] - '0');
}

int	ft_check_utod(int col, char grid[6][6])
{
	int	max_height;
	int	visibility;
	int	i;

	max_height = 0;
	visibility = 0;
	i = 1;
	while (i < 5)
	{
		if (grid[i][col] > max_height && grid[i][col] != 0)
		{
			max_height = grid[i][col];
			visibility++;
		}
		i++;
	}
	return (visibility == grid[0][col] - '0');
}

int	ft_check_dtou(int col, char grid[6][6])
{
	int	max_height;
	int	visibility;
	int	i;

	max_height = 0;
	visibility = 0;
	i = 4;
	while (i >= 1)
	{
		if (grid[i][col] > max_height && grid[i][col] != 0)
		{
			max_height = grid[i][col];
			visibility++;
		}
		i--;
	}
	return (visibility == grid[5][col] - '0');
}

int	ft_check_repeat(int row, int col, char grid[6][6], char num)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}
