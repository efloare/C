/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 12:34:31 by efloare           #+#    #+#             */
/*   Updated: 2016/02/18 13:54:48 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		issp(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

int main(int ac, char **av)
{

	int	i;
	char *firstw;
	int beforelastw = 0;


	i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
			i++;
		if(issp(av[1][i]) != 0)
			while(issp(av[1][i]) != 0)
			{
				i--;
			}
		while(issp(av[1][i]) == 0)
		{
			i--;
		}
		i++;
		beforelastw = i;
		while(issp(av[1][i]) == 0)
		{
			write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		if(
	/*	if(issp(av[1][i + 1]) == 1 && av[1][i] != '\0')
			write(1, " ", 1);
		while(av[1][i] != '\0')
		{
			if(issp(av[1][i]) != 0)
				while(issp(av[1][i]) != 0)
				{
					i++;
				}
			while(issp(av[1][i]) == 0)
			{
				*firstw = av[1][i]; 
				i++;
				firstw++;
			}
		}
		while(av[1][i] != '\0' && i < beforelastw)
		{
			if(issp(av[1][i]) == 1)
				i++;
			else
			{
				if(issp(av[1][i + 1]) == 1)
					write(1, " ", 1);
				write(1, &av[1][i], 1);
				i++;
			}
		}*/

	}
	write(1,"\n",1);
	return(0);
}
