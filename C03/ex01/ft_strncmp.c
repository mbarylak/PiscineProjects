/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:57:07 by mbarylak          #+#    #+#             */
/*   Updated: 2021/09/14 19:21:55 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && i < (n - 1))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (n > 0)
		return (s1[i] - s2[i]);
	else
		return (0);
}
