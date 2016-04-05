/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 18:45:07 by efloare           #+#    #+#             */
/*   Updated: 2016/02/09 19:23:09 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{

	int	i;
	int k;
	int divizor;
	int nbr;

	divizor = 1;
	nbr = 0;
	if(ac == 3)
	{
		i = atoi(av[1]);
		k = atoi(av[2]);
		while( divizor <= i && divizor <= k)
		{
			if( i % divizor == 0 && k % divizor == 0)
				nbr =  divizor;
			divizor++;
		}
		printf( "%i",nbr);
	}
	printf( "\n");
	return(0);
}
