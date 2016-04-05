/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoporii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 13:11:14 by acoporii          #+#    #+#             */
/*   Updated: 2015/09/24 22:52:02 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_tot		alocare(t_tot tot, int i)
{
	tot.str = (char**)malloc(sizeof(char*) * (tot.y));
	while (i < tot.y)
	{
		tot.str[i] = (char*)malloc(sizeof(char) * (tot.x));
		i++;
	}
	return (tot);
}

t_tot		citire(t_tot tot, int i, int j)
{
	int		stop;
	char	buffer;
	int		fd;

	fd = open(tot.argv[tot.nr_file], O_RDONLY);
	stop = 1;
	while (read(fd, &buffer, 1) && stop)
	{
		if (buffer != '\n' && stop == 1)
		{
			tot.tab1[j] = buffer;
			j++;
		}
		else if (buffer != '\n' && stop == 2)
			i++;
		else
			stop++;
		if (buffer == '\n' && stop == 3)
			stop = 0;
	}
	tot.itab1 = j;
	tot.x = i + 1;
	close(fd);
	return (tot);
}

t_tot		main2(t_tot tot)
{
	tot.error = 1;
	tot = citire(tot, 0, 0);
	tot = map_error(tot, 0);
	if (tot.error)
	{
		tot = map_error3(tot, 0, 1, 3);
		if (tot.error)
		{
			tot = alocare(tot, 0);
			tot = inregistrare(tot);
			if (tot.error)
			{
				tot = patrat(tot);
				scriere_patrat(tot);
				afisare(tot);
				if (tot.str)
					free(tot.str);
			}
		}
	}
	return (tot);
}

int			main(int argc, char **argv)
{
	t_tot	tot;
	int		i;

	i = 1;
	tot.argv = argv;
	while (i < argc)
	{
		tot.nr_file = i;
		tot = main2(tot);
		i++;
	}
	return (0);
}
