/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inregistrare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 21:50:05 by efloare           #+#    #+#             */
/*   Updated: 2015/09/24 22:52:19 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_tot		inregistrare2(t_tot tot)
{
	while (tot.j < tot.x && read(tot.fol, &tot.buf, 1))
	{
		if (tot.fol == '\n' && tot.stop2)
			tot.stop = -1;
		if (!tot.stop)
		{
			tot = map_error2(tot);
			if (tot.error)
			{
				tot.str[tot.i][tot.j] = tot.buf;
				tot.stop2 = 0;
				tot.j++;
			}
			else
				return (tot);
		}
		if (tot.stop)
			tot.stop++;
	}
	return (tot);
}

t_tot		inregistrare(t_tot tot)
{
	tot.stop2 = 1;
	tot.stop = -6;
	tot.i = 0;
	tot.j = 0;
	tot.fol = open(tot.argv[tot.nr_file], O_RDONLY);
	while (tot.i < tot.y)
	{
		tot = inregistrare2(tot);
		tot.j = 0;
		tot.i++;
	}
	close(tot.fol);
	return (tot);
}
