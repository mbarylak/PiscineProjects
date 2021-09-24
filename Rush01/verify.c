/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:24:03 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/15 18:33:17 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cont_verify(int i, char *val)
{
	if (i ! == 31)
	{
		write(1, "Error\n", 6);
		return (0);
	}	
}

int	ft_verify_input(int cont, char *val)
{
	int i;

	i = 0;
	if (cont != 2 || val = '\0')
	{
		write(1, "Error\n", 6);
	}
	while(val[i] != '\0')
	{
		if (val[i] != ' ' && val[i] != '1' && val[i] != '2' && val[i] != '3' && val[i] != '4')
		{	
			write (1, "Error\n", 6);
			return (0);
		}
		else if ((i % 2 != 0) && val[i] != ' ')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	cont_verify(i, val);
	return (0);
}
