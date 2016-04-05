/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patrat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 19:29:49 by ohoza             #+#    #+#             */
/*   Updated: 2015/09/24 21:05:08 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_tot		verifica_patrat2(t_tot tot, int ci, int cj)
{
	tot.okp = 1;
	while (tot.i <= ci + tot.p)
	{
		while (tot.j <= cj + tot.p)
		{
			if (tot.str[tot.i][tot.j] == tot.tab2[0])
				tot.j++;
			else
			{
				tot.i = ci;
				tot.j = cj;
				tot.okp = 0;
				return (tot);
			}
		}
		tot.i++;
		tot.j = cj;
	}
	return (tot);
}

int			verifica_patratt(t_tot tot)
{
	int		ci;
	int		cj;

	ci = tot.i;
	cj = tot.j;
	if (tot.p > tot.sp)
	{
		tot.sy = tot.i;
		tot.sx = tot.j;
		tot.sp = tot.p;
	}
	tot = verifica_patrat2(tot, ci, cj);
	if (tot.okp)
	{
		tot.i = ci;
		tot.j = cj;
		tot.okp = 1;
	}
	return (1);
}

t_tot		verifica_patrat(t_tot tot)
{
	int		ci;
	int		cj;

	ci = tot.i;
	cj = tot.j;
	if (tot.p > tot.sp)
	{
		tot.sy = tot.i;
		tot.sx = tot.j;
		tot.sp = tot.p;
	}
	tot = verifica_patrat2(tot, ci, cj);
	if (tot.okp)
	{
		tot.i = ci;
		tot.j = cj;
		tot.okp = 1;
	}
	return (tot);
}

t_tot		patrataux(t_tot tot)
{
	while (tot.j < tot.x)
	{
		if (tot.str[tot.i][tot.j] == tot.tab2[0])
		{
			while (tot.okp)
			{
				tot = verifica_patrat(tot);
				tot.p++;
			}
			if ((tot.p - 1) + tot.j <= tot.x)
			{
				tot.p--;
				if (verifica_patratt(tot))
					tot.j += tot.p;
				else
					tot.j++;
				tot.okp = 1;
			}
			else
				tot.j = tot.x;
		}
		else
			tot.j++;
	}
	return (tot);
}

t_tot		patrat(t_tot tot)
{
	int savep;

	tot.i = 0;
	tot.j = 0;
	tot.p = 1;
	tot.sp = 0;
	tot.okp = 1;
	savep = 0;
	while (tot.i < tot.y)
	{
		tot = patrataux(tot);
		tot.i++;
		tot.j = 0;
	}
	return (tot);
}
