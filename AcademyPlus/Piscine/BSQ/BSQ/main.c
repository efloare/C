/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoporii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 13:11:14 by acoporii          #+#    #+#             */
/*   Updated: 2015/09/21 22:37:41 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"


void intregistrare(char **str, int y, int x)
{
	int		i;
	int		j;
	char	buffer;
	int 	stop;
	int 	fd;

	fd = open("file_ex", O_RDONLY);
	stop = 1;
	i = 0;
	j = 0;

	while (i <= y)
	{

		while((read(fd, &buffer, 1) != 0)  && stop)
		{
			str[i][j] = buffer;
			if (str[i][j] == '\n')
				stop = 0;
			j++;
		}
		stop = 1;
		j = 0;
		i++;
	}
	close(fd);
	i = 1;
	j = 0;
	while (i < y)
	{
		while (j < (x + 1))
		{
			ft_putchar(str[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
}

char	**alocare(char tab[10], int x)
{
	int		y;
	char	**str;
	int		i;

	i = 0;
	y = ft_atoi(tab);
	y++;
	str = (char**)malloc(sizeof(char*) * y);
	while(i < y)
	{
		str[i] = (char*)malloc(sizeof(char) * (x));
		i++;
	}
	intregistrare(str, y, x);
	return (str);
}

char	**citire_alocare( int i, int j)
{
	char	**str;
	char	tab[10];
	int 	stop;
	char	buffer;
	int 	fd;

	fd = open("file_ex", O_RDONLY);
	stop = 1;
	while(read(fd, &buffer, 1) && stop)
	{
		if (buffer != '\n' && stop == 1)
		{
			tab[j] = buffer;
			j++;
		}
		else if (buffer != '\n' && stop == 2 )
			i++;
		else 
			stop ++;

		if (buffer == '\n' && stop == 3)
			stop = 0;
	}
	close (fd);
	str = alocare(tab, i + 1);
	return (str);
}
int		main(int argc, char **argv)
{
	char	**str;	

	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}

	str = citire_alocare( 0, 0);
	return (0);
}
