/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 12:00:52 by efloare           #+#    #+#             */
/*   Updated: 2015/09/10 12:06:16 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	ft_putchar('\0');
	return (0);
}
