/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 17:37:36 by efloare           #+#    #+#             */
/*   Updated: 2016/02/17 19:31:54 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_memory(const void *addr, size_t size)
{
	//unsigned char *p = (unsigned char *)&addr;
	//char *p;
	int i;
	int nbrbase;
	int *k;

	nbrbase = 0;
	i = 0;
	while(k[i])
	{
		k[i] = (int)(((unsigned char*)(addr + i)));
		i++;
	}
	//int base_16[17] = {0, 1 , 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f};
	static char	buf[17] = "0123456789abcdef";
	while(i < size)
	{
		nbrbase = (int)k[i]/  16;
		printf("%d", buf[nbrbase]);
		printf("\nstatic=== ");
		i++;
	}
	i = 0;
	while( i < size)
	{
		//write(1, &p[i], 4);
		printf("%d", (int)((*(unsigned char*)(addr + i))));
		//	write(1, addr + i, 1);
		//	write(1, "\n", 1);
		printf("  =?= " );
		printf("%d\n", k[4]);
		i++;
	}
}

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
		12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}
