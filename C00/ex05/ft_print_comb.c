/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:39:32 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/10 20:28:03 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	cent;
	int	dec;
	int	uds;

	cent = '/';
	while (++cent <= '7')
	{
		dec = cent;
		while (++dec <= '8')
		{
			uds = dec;
			while (++uds <= '9')
			{	
				write(1, &cent, 1);
				write(1, &dec, 1);
				write(1, &uds, 1);
				if (!(cent == '7' && dec == '8' && uds == '9'))
				{
					write(1, &",", 1);
					write(1, &" ", 1);
				}	
			}
		}	
	}	
}
