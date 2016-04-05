/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 16:02:43 by efloare           #+#    #+#             */
/*   Updated: 2016/03/10 16:31:33 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char    *ft_itoa(int nbr)
{
	int len = 0;
	long nr = (long) nbr;
	int sign = 1;
	char *str;

	str = malloc(32);


	if(nbr < 0)
	{
		len++;
		sign = (-1);
		nbr =  nbr * (-1);
	}
	if(nbr == 0)
	{
		str[0] = '0';
	}
	while(nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}

	len++;
	str[len] = '\0';
	len--;
	while(len > 0)
	{
		str[len] = "0123456789"[nr % 10];
		nr = nr /10;
		len--;
	}
	if(sign == (-1))
		str[len] = '-';
	else
		str[len] = "0123456789"[nr % 10];

	return (str);
}

int main(void)
{

	printf("%s", ft_itoa(78100));

	return (0);

}
