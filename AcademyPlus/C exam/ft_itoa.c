/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 15:21:04 by efloare           #+#    #+#             */
/*   Updated: 2016/02/18 15:45:02 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	if( nbr > 2147483647 || nbr < -2147483648)
	char *s; 
	long i;
	long n;
	long leng;

	i = 0;

	(long*)nbr = (long*)nbr;
	n = nbr;
	leng = 0;
	while(n)
	{
		n = n / 10;
		leng++;
	}

	if(nbr > 0)
		s = (char *) malloc (sizeof(char) * (leng )) ;
	if(nbr < 0)
		s = (char *) malloc (sizeof(char) * (leng + 1)) ;
	if (nbr == 0)
	{
		s =(char *) malloc (sizeof(char) * 2);
		s[0] = '0';
		s[1] = '\0';
		printf("%s", s);
	}
	if(nbr < 0)
	{
		nbr = nbr * (-1);
		s[0] = '-';
		leng++;
	}
	leng--;
	while(nbr)
	{
		s[leng] = nbr % 10 + '0';
		leng--;
		nbr = nbr / 10;
	}
	printf("%s", s);
	return(s);
}

int main(void)
{
	 long i;


	i = -2147483648;
	ft_itoa(i);
	return(0);
}
