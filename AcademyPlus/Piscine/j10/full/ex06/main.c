/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 17:55:47 by lboieru           #+#    #+#             */
/*   Updated: 2015/09/16 15:24:31 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

char		ft_get_op(char *str)
{
	char	op[10][10];
	int		i;

	op[0][0] = '+';
	op[1][0] = '-';
	op[2][0] = '*';
	op[3][0] = '/';
	op[4][0] = '%';
	i = 0;
	while (i < 5)
	{
		op[i][1] = 0;
		if (!ft_strcmp(op[i], str))
			return (op[i][0]);
		++i;
	}
	return (0);
}

int			nu_mi_ies_liniile(int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return (1);
	}
	return (0);
}

void		compute(long a, long b, char op, long (*f[6])(long, long))
{
	long	(*g)(long, long);

	g = NULL;
	if (op == '+')
		g = f[0];
	else if (op == '-')
		g = f[1];
	else if (op == '*')
		g = f[2];
	else if (op == '/')
	{
		if (nu_mi_ies_liniile(b))
			return ;
		g = f[3];
	}
	else if (op == '%')
	{
		if (b == 0)
		{
			ft_putstr("Stop : modulo by zero");
			return ;
		}
		g = f[4];
	}
	ft_putnbr((*g)(a, b));
}

int			main(int argc, char **argv)
{
	long	a;
	long	b;
	char	op;
	long	(*f[6])(long, long);

	f[0] = sum;
	f[1] = subtract;
	f[2] = mul;
	f[3] = div;
	f[4] = mod;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = ft_get_op(argv[2]);
	if (op == 0)
		ft_putnbr(0);
	else
		compute(a, b, op, f);
	write(1, "\n", 1);
	return (0);
}
