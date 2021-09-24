/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:13:05 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/26 19:19:22 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_fill_solution(char **map, int	cols, int rows, char o, char x)
{
	int	i;
	int	j;
	int	pos_i;
	int	pos_j;
	int	count_max;
	int	**mat;

	mat = ft_make_num_matrix(map, cols, rows, o);
	count_max = ft_find_square(mat, cols, rows);
	pos_i = ft_find_position_i(mat, count_max, cols, rows);
	pos_j = ft_find_position_j(mat, count_max, cols, rows);
	i = pos_i - (count_max - 1);
	while (i < (pos_i + 1))
	{
		j = pos_j - (count_max - 1);
		while (j < (pos_j + 1))
		{
			map[i][j] = x;
			j++;
		}
		i++;
	}
	print_char_matrix(map, rows, cols);
	return (map);
}
/*
void	ft_print_solution(int i, char **argv)
{
	int		fd;
	char	**map;
	int		j;
	int		cols;
	int		rows;

	fd = open (argv[i], O_RDONLY);
	buf = ft_read_map(argv[i]);
	


}*/
