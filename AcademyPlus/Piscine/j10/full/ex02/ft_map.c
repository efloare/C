/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 14:41:21 by lboieru           #+#    #+#             */
/*   Updated: 2015/09/15 15:05:16 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*retu;

	retu = (int *)malloc(sizeof(int) * (length + 1));
	i = 0;
	while (i < length)
	{
		retu[i] = (*f)(tab[i]);
		++i;
	}
	return (retu);
}
