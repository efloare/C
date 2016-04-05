/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 14:35:46 by efloare           #+#    #+#             */
/*   Updated: 2015/09/08 15:38:25 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int x)
{
	int	i;

	i = 2;
	if (x < 2)
		return (0);
	while (i <= x / 2)
	{
		if (x % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1 < 2)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
}

int	main(void)
{
	printf("%d", ft_find_next_prime(6));
	return (0);
}
