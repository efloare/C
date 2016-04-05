/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maperror.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 12:44:04 by ohoza             #+#    #+#             */
/*   Updated: 2015/09/24 22:42:37 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_tot	map_error2(t_tot tot)
{
	if (!(tot.tab2[0] == tot.buf || tot.tab2[1] == tot.buf\
				|| tot.buf == '\n' || tot.buf == 32))
	{
		ft_putstr("map error test 4");
		ft_putchar('\n');
		tot.error = 0;
		return (tot);
	}
	return (tot);
}

t_tot	map_error3(t_tot tot, int i, int stop2, int stop)
{
	char	buffer;
	int		fd;

	fd = open(tot.argv[tot.nr_file], O_RDONLY);
	while (read(fd, &buffer, 1))
	{
		if (buffer == '\n' && stop2)
			stop = -1;
		if (!stop)
		{
			stop2 = 0;
			i++;
		}
		if (stop)
			stop++;
	}
	close(fd);
	if (i != (tot.x * (tot.y - 1)))
	{
		ft_putstr("map error test 3");
		ft_putchar('\n');
		tot.error = 0;
		return (tot);
	}
	return (tot);
}

t_tot	map_error(t_tot tot, int i)
{
	tot.tab2[2] = tot.tab1[tot.itab1 - 1];
	tot.tab2[1] = tot.tab1[tot.itab1 - 2];
	tot.tab2[0] = tot.tab1[tot.itab1 - 3];
	tot.tab1[tot.itab1 - 3] = '\0';
	tot.y = (ft_atoi(tot.tab1) + 1);
	if ((tot.tab2[2] == tot.tab2[1]) || (tot.tab2[2] == tot.tab2[0])\
			|| (tot.tab2[1] == tot.tab2[0]))
	{
		ft_putstr("map error test");
		ft_putchar('\n');
		tot.error = 0;
		return (tot);
	}
	while (tot.tab1[i] >= 48 && tot.tab1[i] <= 57)
		i++;
	if (tot.tab1[i] >= 33 && tot.tab1[i] <= 126)
	{
		ft_putstr("map error test 2");
		ft_putchar('\n');
		tot.error = 0;
		return (tot);
	}
	return (tot);
}
