/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:38:11 by efloare           #+#    #+#             */
/*   Updated: 2016/03/10 13:49:23 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int 	i;
	int		j;
	char	aux;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		sign;
	char	*str;
	int 	i;

	i = 0;
	sign = 0;
	str = malloc(32);
	if (nbr < 0)
		sign = 1;
	if (nbr == 0)
		str[i++] = '0';
	while (nbr != 0)
	{
		str[i++] = "0123456789"[ft_abs(nbr % 10)];
		nbr /= 10;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
