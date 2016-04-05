/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoporii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 13:11:14 by acoporii          #+#    #+#             */
/*   Updated: 2015/09/22 14:58:04 by ohoza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void		intregistrare(char **str, t_tot tot, int i, char **argv)
{
	int		j;
	char	buffer;
	int		stop;
	int		fd;

	fd = open(argv[1], O_RDONLY);
	stop = 1;
	j = 0;
	while (i <= tot.y)
	{
		while ((read(fd, &buffer, 1) != 0) && stop)
		{
			str[i][j] = buffer;
			if (str[i][j++] == '\n')
				stop = 0;
		}
		stop = 1;
		j = 0;
		i++;
	}
	afisare(str, tot);
	close(fd);
}

char		**alocare(char tab[10], int x, char **argv)
{
	int		y;
	char	**str;
	int		i;
	t_tot	tot;

	i = 0;
	y = ft_atoi(tab);
	y++;
	tot.x = x;
	tot.y = y;
	str = (char**)malloc(sizeof(char*) * y);
	while (i < y)
	{
		str[i] = (char*)malloc(sizeof(char) * (x));
		i++;
	}
	intregistrare(str, tot, 0, argv);
	return (str);
}

char		**citire_alocare(char **argv, int i, int j)
{
	char	**str;
	char	tab[10];
	int		stop;
	char	buffer;
	int		fd;

	fd = open(argv[1], O_RDONLY);
	stop = 1;
	while (read(fd, &buffer, 1) && stop)
	{
		if (buffer != '\n' && stop == 1)
		{
			tab[j] = buffer;
			j++;
		}
		else if (buffer != '\n' && stop == 2)
			i++;
		else
			stop++;
		if (buffer == '\n' && stop == 3)
			stop = 0;
	}
	close(fd);
	str = alocare(tab, i + 1, argv);
	return (str);
}

int 		main(int argc, char **argv)
{
	char	**str;
	
	if (argc < 2)
	{
		write(1, "map error\n", 9);
		return (1);
	}
	str = citire_alocare(argv, 0, 0);
	return (0);
}
