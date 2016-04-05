/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 13:48:09 by efloare           #+#    #+#             */
/*   Updated: 2016/02/16 14:15:11 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	char s[9999];
	int i;

	i = 0;
	if (ac < 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (ac == 2)
	{
		write(1, "1\n", 2);
		return (0);
	}
	if (ac > 2 && ac <= 10 )
	{
		s[9998] = (ac - 1) + '0';
		write(1, &s[9998], 1);
		write(1, "\n", 1);
		return (0);
	}
	if(ac > 9)
	{
		ac = ac - 1;
		while(ac)
		{
			s[i] = ac % 10 + '0';
			ac = ac / 10;
			i++;
		}
		i--;
		while(i >= 0)
		{
			write(1, &s[i], 1);
			i--;
		}
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
