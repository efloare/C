/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 12:02:48 by efloare           #+#    #+#             */
/*   Updated: 2016/03/10 13:37:21 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char *s;
	int lenght = 0;
	int i = nbr;

	if(nbr < 0)
	{
		nbr = nbr * (-1);
		lenght++;
		printf("A");
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		lenght++;
	}
	if((s = (char*)malloc(sizeof(char) * lenght)) ==  NULL)
		return(NULL);
	nbr = i;
	i = 0;
	if(nbr < 0)
		s[0] = '-';
	while(nbr > 0)
	{
		
		s[lenght] = nbr % 10 + '0';
		nbr = nbr / 10;
		lenght--;
	}
	lenght++;
	s[lenght] = '\0';
	return(s);
}

int main(void)
{
	printf("%s", ft_itoa(100));
	return (0);
}
