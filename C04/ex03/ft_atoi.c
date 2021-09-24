/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:38:17 by mbarylak          #+#    #+#             */
/*   Updated: 2021/09/14 20:34:19 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*space_in_str(char *str)
{
	while ((*str <= '\r' && *str >= '\t') || *str == ' ')
		str++;
	return (str);
}

char	*neg_in_str(char *str, int sign)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	sign = 1;
	str = space_in_str(str);
	str = neg_in_str(str, sign);
	nbr = 0;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + (*str - '0');
		str++;
	}
	return (nbr * sign);
}
