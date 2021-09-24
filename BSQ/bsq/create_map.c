/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:09:53 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/26 19:20:22 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_create_map(char *buf, int cols, int rows)
{
	char	**map;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	map = (char **) malloc(rows * sizeof (char *));
	if (map == 0)
		return (0);
	while (i < rows)
	{
		map[i] = (char *) malloc(cols * sizeof (char));
		if (map[i] == 0)
			return (0);
		j = 0;
		while (j < cols)
		{	
			if (buf[k] != '\n')
				map[i][j] = buf[k];
			k++;
			j++;
		}
		i++;
	}
	return (map);
}

int	**ft_make_num_matrix(char **map, int cols, int rows, char o)
{
	int	i;
	int	j;
	int	**mat;
	int	min;

	i = 0;
	mat = make_matrix(rows, cols);
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (map[i][j] == o)
				mat[i][j] = 0;
			else if (i == 0 || j == 0)
				mat[i][j] = 1;
			else
			{	
				min = ft_min(mat[i - 1][j], mat[i][j - 1], mat[i - 1][j - 1]);
				mat[i][j] = min + 1;
			}
			j++;
		}
		i++;
	}
	return (mat);
}

int	ft_find_square(int **mat, int cols, int rows)
{
	int	i;
	int	j;
	int	count_max;

	i = 0;
	count_max = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (mat[i][j] > count_max)
				count_max = mat[i][j];
			j++;
		}
		i++;
	}
	free(mat);
	return (count_max);
}

int	ft_find_position_i(int **mat, int count_max, int cols, int rows)
{
	int	i;
	int	j;
	int	pos_i;

	i = 0;
	pos_i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (mat[i][j] == count_max)
			{
				pos_i = i;
				return (pos_i);
			}
			j++;
		}
		i++;
	}
	free(mat);
	return (pos_i);
}

int	ft_find_position_j(int **mat, int count_max, int cols, int rows)
{
	int	i;
	int	j;
	int	pos_j;

	i = 0;
	pos_j = 0;
	while (i < (rows - 1))
	{
		j = 0;
		while (j < cols)
		{
			if (mat[i][j] == count_max)
			{
				pos_j = j;
				return (pos_j);
			}
			j++;
		}
		i++;
	}
	free(mat);
	return (pos_j);
}
