/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 15:41:06 by efloare           #+#    #+#             */
/*   Updated: 2016/02/15 19:21:46 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main( int ac, char **av)
{
	int k;
	int n;
	int flagg, i;
	int word;

	word = 0;
	k = 0;
	n = 0;
	i = 0;
	flagg = 0;
	if( ac == 2)
	{
		while(av[1][k])
		{
			if(av[1][k] == ' ')
				flagg++;
			k++;
		}
		if(k == 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		if(flagg == 0)
		{
			while(av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;
			}
			write(1, "\n", 1);
			return(0);
		}
		k--;
		word = k;
		while(av[1][k])
		{
			while(av[1][k] != ' ' && av[1][k] != '\0')
			{
				word--;
				k--;
			}
			if(av[1][k] == ' ' || av[1][k] == '\0')
			{
				k++;
				while(av[1][k] != ' ' && av[1][k] != '\0')
				{
					write(1, &av[1][k],1);
					k++;
				}
				k = word - 1;
				word = word - 1;
			}
			if (k >= 0)
				write(1, " ", 1);
			while(av[1][k] != ' ' && av[1][k] != '\0')
			{
				word--;
				k--;
			}
		}
		k = 0;
		while(av[1][k] != ' ')
		{
			write(1, &av[1][k],1);
			k++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
