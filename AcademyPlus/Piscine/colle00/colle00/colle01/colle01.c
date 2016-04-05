/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbucur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 22:20:47 by lbucur            #+#    #+#             */
/*   Updated: 2015/09/06 22:30:32 by lbucur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main (void);

void	ft_putchar(char c);

void	rectangle(int a, int b, int x, int y)
{
	if (((a == 1) && (b == 1)) || ((a == y) && (b == x)))
		ft_putchar('/');
	else
	{
		if (((a == y) && (b == 1)) || ((a == 1) && (b == x)))
			ft_putchar('\\');
		else
		{
			if ((a == 1) || (a == y))
				ft_putchar('*');
			else
			{
				if ((b == 1) || (b == x))
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
		}
	}
}

void	colle01(int x, int y)
{
	int	u;
	int	v;

	if ((x == 0) || (y == 0))
		return ;
	u = 1;
	while (u <= y)
	{
		v = 1;
		while (v <= x)
		{
			rectangle(u, v, x, y);
			v++;
		}
		ft_putchar('\n');
		u++;
	}
}
