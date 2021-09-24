/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:41:49 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/26 19:16:43 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

int	main(int argc, char **argv)
{
	char	*buf;
	int		pos_i;
	int		pos_j;
	char	**map;
	int		**mat;
	int		i;
//	int		j;
	int		nbr_cols;
	int		nbr_rows;
	int		count_max;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{	
			buf = ft_read_map(argv[i]);
			nbr_rows = ft_get_nbr_rows(buf);
			nbr_cols = ft_get_nbr_columns(buf);
			buf = ft_skip_first_row(buf);
			map = ft_create_map(buf, nbr_cols, nbr_rows);
			print_char_matrix(map, nbr_rows, nbr_cols);
			ft_putchar('\n');
			mat = ft_make_num_matrix(map, nbr_cols, nbr_rows, 'o');
			print_int_matrix(mat, nbr_rows, nbr_cols);
			ft_putchar('\n');
			count_max = ft_find_square(mat, nbr_cols, nbr_rows);
			ft_putnbr(count_max);
			ft_putchar('\n');
			pos_i = ft_find_position_i(mat, count_max, nbr_cols, nbr_rows);
			ft_putnbr(pos_i);
			ft_putchar('\n');
			pos_j = ft_find_position_j(mat, count_max, nbr_cols, nbr_rows);
			ft_putnbr(pos_j);
			ft_putchar('\n');
			ft_fill_solution(map, nbr_cols, nbr_rows, 'o', 'x');
	/*		j = 0;
			while (pos[j])
			{
				ft_putnbr(pos[j]);
				ft_putchar(' ');
				j++;
			}
			j = 0;
			while (buf[j])
			{
				write(1, &buf[j], 1);
				j++;
			}*/
			i++;
		}
	}
}
