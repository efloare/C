/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 17:23:21 by lboieru           #+#    #+#             */
/*   Updated: 2015/09/16 14:50:04 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		cresc;
	int		desc;

	cresc = 1;
	desc = 1;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			cresc = 0;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			desc = 0;
		++i;
	}
	return (desc || cresc);
}
