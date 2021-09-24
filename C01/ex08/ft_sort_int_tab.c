/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarylak <mbarylak@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:59:38 by mbarylak          #+#    #+#             */
/*   Updated: 2021/08/26 13:28:26 by mbarylak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	
	i = 0;
	while ( i < size)
	{
		if ( (tab[i] > tab[i + 1]) && (tab[i] != tab[size -1]))
		{	
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
		i++;
	}
}
