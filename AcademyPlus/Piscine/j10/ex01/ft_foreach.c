/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 15:16:20 by efloare           #+#    #+#             */
/*   Updated: 2015/09/15 16:53:08 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef void (*f)(int);

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putchar((nb / 10) + '0');
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void		ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int			main(void)
{
	void (*f)(int);
	int *tab;

	tab[0]=0;
	tab[1]=1;
	tab[2]=2;
	f = &ft_foreach;
	void ft_foreach(tab, 123, &ft_puteach);
	return (0);	
}
