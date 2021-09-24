/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:24:00 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/19 19:58:04 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_dec_to_hex(char c)
{
	int	n;
	int	m;

	n = c / 16;
	m = c % 16;
	write(1, "\\", 1);
	c = '0' + n;
	write(1, &c, 1);
	if (m <= 9)
		c = '0' + m;
	else
		c = '`' + (m - 9);
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			ft_dec_to_hex(str[i]);
		else
			write (1, &str[i], 1);
		i++;
	}
}
