/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 20:09:16 by efloare           #+#    #+#             */
/*   Updated: 2016/02/09 21:00:25 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	char			bit[9] = "00000000";
	char			reverse_bit[9] = "00000000";
	int				i;
	int				n;
	unsigned char	swap;

	i = 0;
	n = 128;
	swap = 0;
	while (n > 0)
	{
		if ((octet / n) == 1)
			bit[i] = '1';
		if ((octet / n) == 1)
			octet = octet - n;
		else
			bit[i] = '0';
		n = n / 2;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		reverse_bit[i] = bit[i + 4];
		i++;
	}
	while (i < 8)
	{
		reverse_bit[i] = bit[i - 4];
		i++;
	}
	i = 0;
	n = 128;
	while (reverse_bit[i] != '\0')
	{
		if (reverse_bit[i] == '1')
			swap = swap + n;
		n = n / 2;
		i++;
	}
	printf("%d", swap);
	return (swap);
}


int main()
{
	unsigned char c = '8';
	swap_bits(c);
	return(0);
}
