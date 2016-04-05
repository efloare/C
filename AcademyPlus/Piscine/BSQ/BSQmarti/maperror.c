/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maperror.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 12:44:04 by ohoza             #+#    #+#             */
/*   Updated: 2015/09/22 14:45:49 by ohoza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		map_error2(t_tot tot, char **str, int i, int j)
{
	while (i < tot.y)
	{
		while (j < tot.x)
		{

			if (tot.tab[0] != str[i][j++] || tot.tab[1] != str[i][j++]\
					|| tot.tab[2] != str[i][j++])
			{
				ft_putstr("map error");
				return (0);
			}
		}
	}
	return (1);
}

int 	map_error(char tab[10], char **str, t_tot tot)
{	
	int		i;
	int 	j;

	j = 0;
	i = 0;
	if(tab[i] >= 48 && tab[i] <= 57)
		i++;	
	tot.tab[0] = tab[i++]; 
	tot.tab[1] = tab[i++]; 
	tot.tab[2] = tab[i++]; 
	if (tab[i] >= 33 && tab[i] <= 126)
	{
		ft_putstr("map error");
		return (0);
	}
	if (!map_error2(tot, str, 0, 0))
		return (0);
	return (1);
}
