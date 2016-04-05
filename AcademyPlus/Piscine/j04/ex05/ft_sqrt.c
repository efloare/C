/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 12:08:54 by efloare           #+#    #+#             */
/*   Updated: 2015/09/08 13:22:25 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i <= (nb / 2))
	{
		if (nb == i * i)
			return (i);
		i++;
	}
			return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}
