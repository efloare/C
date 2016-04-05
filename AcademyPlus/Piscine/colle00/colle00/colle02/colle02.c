/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbucur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 18:28:17 by lbucur            #+#    #+#             */
/*   Updated: 2015/09/06 22:29:16 by lbucur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main (void);

void	ft_putchar(char c);

void	rectangle(int a, int b, int x, int y)
{
	if (((a == 1) && (b == 1)) || ((a == 1) && (b == x)))
		ft_putchar('A');
	else
	{
		if (((a == y) && (b == 1)) || ((a == y) && (b == x)))
			ft_putchar('C');
		else
		{
			if ((a == 1) || (a == y))
				ft_putchar('B');
			else
			{
				if ((b == 1) || (b == x))
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
		}
	}
}

void	colle02(int x, int y)
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
