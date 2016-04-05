/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 11:14:19 by efloare           #+#    #+#             */
/*   Updated: 2016/02/19 11:31:55 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	int k;

	if(ac ==2)
	{
		i = atoi(av[1]);
		k = 2;
		while(i > 0 && k < i)
		{
			if(i % k == 0)
			{
				i = i / k;
				printf("%d", k);
				if(k <= i)
					printf("*");
				k = 1;
			}
			k++;
		}
		printf("%d", i);
	}
	printf("\n");
	return(0);

}
