/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 15:12:51 by efloare           #+#    #+#             */
/*   Updated: 2016/01/14 16:38:36 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main (int ac, char **av)
{
	int i;
	int k;
	int m;
	int n;

	i = 1;
	n = 0;
	k = 1;
	m =0 ;


	while(k < ac)
	{
		m = 0;
		while((av[k][m] != '\0'))
		{
			write (1, &av[k][m],1);
			m++;
		}
		k++;
	}
	write(1, "\n",1);
	if(ac <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while( i < ac)
	{
		while(av[i][n])
		{
			while(av[i][n] == ' ' || av[i][n] == '\t' || av[i][n] == '\n' || av[i][n] == '\v' || av[i][n] == '\f' || av[i][n] == '\r')
				n++;
			while(!(av[i][n] == ' ' || av[i][n] == '\t' || av[i][n] == '\n' || av[i][n] == '\v' || av[i][n] == '\f' || av[i][n] == '\r'))
			{
				if(av[i][n + 1] == ' ' || av[i][n +1 ] == '\t' || av[i][n +1 ] == '\n'|| av[i][n +1] == '\v' || av[i][n +1 ] == '\f' || av[i][n +1] == '\r')
				{

					if(av[i][n] >= 'a' && av[i][n] <= 'z')
					{
						av[i][n] = av[i][n] - ( 'a' - 'A');
					}
					write(1, &av[i][n],1);
					write(1, " ",1);


				}

				write(1, &av[i][n],1);
				n++;
			}
			n++;
		}
		n = 0;
		i++;
	}
	write(1, "\n",1);
	return (0);
}

