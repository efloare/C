/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 20:49:24 by efloare           #+#    #+#             */
/*   Updated: 2015/09/07 21:30:36 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int r;
	
	r = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power)
	{
		r *= nb;
		power--;
	}
	return (r);
}

int		main(void)
{
	printf("%d", ft_iterative_power(2, 3));
	return (0);
}
