/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 20:42:47 by efloare           #+#    #+#             */
/*   Updated: 2016/02/09 20:53:34 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned char swap_bits(unsigned char octet)
{
		int x = 0;
		unsigned int p1 = 0;
		unsigned int p2 = 0;
		unsigned int n - 0;
	/* Move all bits of first set to rightmost side */
	unsigned int set1 =  (x >> p1) & ((1U << n) - 1);

	/* Moce all bits of second set to rightmost side */
	unsigned int set2 =  (x >> p2) & ((1U << n) - 1);

	/* XOR the two sets */
	unsigned int xor = (set1 ^ set2);

	/* Put the xor bits back to their original positions */
	xor = (xor << p1) | (xor << p2);

	/* XOR the 'xor' with the original number so that the 
	 *        two sets are swapped */
	unsigned int result = x ^ xor;

	return result;
}

/* Drier program to test above function*/
int main()
{
	int res =  swapBits("01000001";
	printf("\nResult = %d ", res);
	return 0;
}
