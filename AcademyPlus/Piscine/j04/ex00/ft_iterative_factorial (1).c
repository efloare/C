/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 18:35:20 by efloare           #+#    #+#             */
/*   Updated: 2015/09/07 19:22:35 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_iterative_factorial(int nb)
{
	int		r;
	int		i;
	
	i = 1;
	r = 1;
	if (nb <= 0)
	   	return (0);
   	if (nb == 1)
		return (1);
	while (i <= nb)
	{
	   	r = i * r ;
		i++;
	}
	return (r);
}

int		main(void)
{
	ft_iterative_factorial(3);
	printf("%d", ft_iterative_factorial(3));
	return(0);

}
