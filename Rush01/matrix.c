/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:47:40 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/24 17:22:15 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	print_matrix(int **matrix, int row, int col);

int	**make_matrix(int val, int row, int col)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = (int**) malloc(row * sizeof(int*));
	i = 0;
	while (i < row)
	{
		matrix[i] = (int*) malloc (col * sizeof (int ));
		j = 0;
		while (j < col)
		{
			matrix[i][j] = val;
			j++;
		}
		i++;
	}
	print_matrix(matrix, row, col);
	return (matrix);
}

int	main(void)
{
	make_matrix(0, 4, 4);
}
