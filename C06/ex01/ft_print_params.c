/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:43:30 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/26 16:38:46 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{	
	if (argc < 1)
		return (0);
	argc = 1;
	while (argv[argc])
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
		argc++;
	}
	return (0);
}
