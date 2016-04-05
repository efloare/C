/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   afisare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 13:09:25 by efloare           #+#    #+#             */
/*   Updated: 2015/09/24 15:12:21 by ohoza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void			afisare(t_tot tot)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < tot.y - 1)
	{
		while (j < tot.x)
		{
			ft_putchar(tot.str[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
}

t_tot			scriere_patrat(t_tot tot)
{
	int	ci;
	int	cj;

	ci = tot.sy;
	cj = tot.sx;
	while (tot.sy < ci + tot.sp)
	{
		while (tot.sx < cj + tot.sp)
		{
			tot.str[tot.sy][tot.sx] = tot.tab2[2];
			tot.sx++;
		}
		tot.sx = cj;
		tot.sy++;
	}
	return (tot);
}
