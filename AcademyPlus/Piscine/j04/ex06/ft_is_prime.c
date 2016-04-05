/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:25:29 by efloare           #+#    #+#             */
/*   Updated: 2015/09/08 14:16:12 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2) \\atata timp cat, ruleaza
	{
		if (nb % i == 0) \\cand restul de la i este 0
			return (0);
		else
			i++; \\ treci la urmatorul
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_is_prime(7));
	return (0);
}
