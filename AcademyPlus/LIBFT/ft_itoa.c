/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 13:31:50 by efloare           #+#    #+#             */
/*   Updated: 2015/11/03 19:04:13 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_lenint(int cp)
{
	int		nblen;

	if (cp == 0)
		return (1);
	nblen = 0;
	while (cp != 0)
	{
		nblen++;
		cp = cp / 10;
	}
	return (nblen);
}

static int	ft_signint(int cp)
{
	if (cp < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	int		nblen;
	int		sign;
	char	*res;

	sign = ft_signint(n);
	nblen = ft_lenint(n);
	res = NULL;
	res = (char *)malloc(sizeof(char) * (nblen + sign + 1));
	if (res)
	{
		res = res + nblen + sign;
		*res = '\0';
		if (!n)
			*--res = '0';
		while (n != 0)
		{
			*--res = ft_abs(n % 10) + '0';
			n = n / 10;
		}
		if (sign)
			*--res = '-';
	}
	return (res);
}
