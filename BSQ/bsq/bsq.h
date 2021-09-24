/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:50:24 by mbarylak          #+#    #+#             */
/*   Updated: 2021/09/13 13:11:35 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int		ft_get_size(char *argv);
char	*ft_read_map(char *argv);
int		ft_get_nbr_columns(char	*buf);
int		ft_get_nbr_rows(char *buf);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_min(int a, int b, int c);
char	*ft_skip_first_row(char *buf);
char	**ft_create_map(char *buf, int cols, int rows);
int		**ft_make_num_matrix(char **map, int cols, int rows, char o);
int		ft_find_square(int **map, int cols, int rows);
int		ft_find_position_i(int **mat, int count_max, int cols, int rows);
int		ft_find_position_j(int **mat, int count_max, int cols, int rows);
void	print_char_matrix(char **matrix, int rows, int cols);
void	print_int_matrix(int **matrix, int rows, int cols);
int		**make_matrix(int row, int col);
char	**ft_fill_solution(char **map, int cols, int rows, char o, char x);
