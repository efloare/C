/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 18:35:20 by efloare           #+#    #+#             */
/*   Updated: 2015/09/07 20:16:45 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int r;
	int i;

	i = 1;
	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		r = i * r;
		i++;
	}
	return (r);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(7));
	return (0);
}
