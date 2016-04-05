/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:51:55 by efloare           #+#    #+#             */
/*   Updated: 2016/03/10 14:01:03 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_array[2048];
char	*g_a;
char	*g_p;

void	whatever(char c)
{
	int	ok;

	ok = 0;
	if (c == '[')
	{
		while (*g_a)
		{
			if (*g_a == '[')
				ok++;
			if (*g_a == ']')
				ok--;
			if (ok == 0)
				return ;
			g_a++;
		}
	}
	if (c == ']')
	{
		while (*g_a)
		{
			if (*g_a == '[')
				ok--;
			if (*g_a == ']')
				ok++;
			if (ok == 0)
				return ;
			g_a--;
		}
	}
}

void	brainfuck(char c)
{
	if (c == '>')
		g_p++;
	if (c == '<')
		g_p--;
	if (c == '+')
		(*g_p)++;
	if (c == '-')
		(*g_p)--;
	if (c == '.')
		write (1, g_p, 1);
	if (c == '[' && *g_p == 0)
		whatever('[');
	if (c == ']' && *g_p != 0)
		whatever(']');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		g_a = argv[1];
		g_p = g_array;
		while (*g_a)
		{
			brainfuck(*g_a);
			g_a++;
		}
	}
	return (0);
}
