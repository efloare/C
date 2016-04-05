/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 20:05:56 by lboieru           #+#    #+#             */
/*   Updated: 2015/09/15 21:24:29 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void		ft_putnbr_rec(long nbr)
{
	char c;

	if (nbr == 0)
		return ;
	ft_putnbr_rec(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

void		ft_putnbr(int nbr)
{
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_rec(-nbr);
	}
	else
		ft_putnbr_rec(nbr);
}

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

long		ft_atoi(char *str)
{
	long	val;
	short	neg;

	val = 0;
	neg = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	if (*str == '+')
		++str;
	else if (*str == '-')
	{
		++str;
		neg = 1;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		val = val * 10 + (*str - '0');
		++str;
	}
	if (neg)
		val = -val;
	return (val);
}
