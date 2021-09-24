/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:52:06 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/26 19:21:15 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_get_size(char *argv)
{
	int		size;
	int		fd;
	char	*buf;

	size = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		size++;
	}
	close (fd);
	return (size);
}

char	*ft_read_map(char *argv)
{
	int		fd;
	int		size;
	char	*buf;

	fd = open(argv, O_RDONLY);
	size = ft_get_size(argv);
	buf = malloc ((size + 1) * sizeof (char));
	if (read(fd, buf, size) == -1 || buf == 0)
		return (0);
	buf[size] = '\0';
	close (fd);
	return (buf);
}

char	*ft_skip_first_row(char *buf)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (buf[i])
	{
		if (flag && buf[i] == '\n')
			flag = 0;
		if (!flag && buf[i] != '\n')
			break ;
		i++;
	}
	return (&buf[i]);
}

int	ft_get_nbr_columns(char *buf)
{
	int	i;
	int	nbr_cols;

	i = 0;
	nbr_cols = 0;
	buf = ft_skip_first_row(buf);
	while (buf[i])
	{
		if (buf[i] != '\n')
			nbr_cols++;
		else
			break ;
		i++;
	}
	return (nbr_cols);
}

int	ft_get_nbr_rows(char *buf)
{
	int	i;
	int	nbr_rows;

	i = 0;
	nbr_rows = 0;
	buf = ft_skip_first_row(buf);
	while (buf[i])
	{
		if (buf[i] == '\n')
			nbr_rows++;
		i++;
	}
	return (nbr_rows);
}
