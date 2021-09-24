/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:46:14 by mbarylak          #+#    #+#             */
/*   Updated: 2021/09/17 14:01:17 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_char_matrix(char **matrix, int row, int col)
{
	int		i;
	int		j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			ft_putchar(matrix[i][j]);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

void	print_int_matrix(int **matrix, int row, int col)
{
	int		i;
	int		j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			ft_putnbr(matrix[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	**make_matrix(int row, int col)
{
	int	**matrix;
	int	i;

	matrix = (int **) malloc (row * sizeof (int *));
	if (matrix == 0)
		return (0);
	i = 0;
	while (i < row)
	{
		matrix[i] = (int *) malloc (col * sizeof (int ));
		if (matrix[i] == 0)
			return (0);
		i++;
	}
	return (matrix);
}
