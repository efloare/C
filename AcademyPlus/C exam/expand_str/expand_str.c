/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 12:04:49 by efloare           #+#    #+#             */
/*   Updated: 2016/02/18 12:12:30 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{

	int	i;
	int k;

	i = 0;
	k = 0;

	if (ac != 2)
	{
		write(1,"\n",1);
		return (0);
	}
	while(av[1][k] != '\0')
		k++;
	while(av[1][k] < 33)
		k--;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] < 33)
				i++;
			else
			{
				write(1, &av[1][i], 1);
				if (av[1][i + 1] < 33 && i < k && av[1][i + 2] != '\0' && av[1][i + 1] != '\0')
				{
					write(1,"   ",3);
				}
				i++;
			}
		}
	}
	write(1,"\n",1);
	return(0);
}
