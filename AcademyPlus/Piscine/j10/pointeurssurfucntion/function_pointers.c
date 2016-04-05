/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_pointers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 14:48:28 by efloare           #+#    #+#             */
/*   Updated: 2015/09/15 15:04:55 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void		ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int			main(void)
{
	void (*f)(char);

	f = &ft_putchar;	
	f('z');
	return (0);
}
