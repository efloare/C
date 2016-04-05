/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 14:25:34 by efloare           #+#    #+#             */
/*   Updated: 2016/02/18 15:19:20 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int k;
	int		swap;

	i = 0;
	k = 0;
	if( size != 0)
	{
		while(i < size-1)
		{
			k = 0;
			while(k < size - i)
			{
				if(tab[k] > tab[k+1])
				{
					swap = tab[k];
					tab[k] = tab[k+1];
					tab[k+1] = swap;
				}
				k++;
			}
			i++;
		}
		i = 0;
		puts("Sirul ordonat este:");
		while (i < size)
			printf("%d", tab[i++]);	


	}
}
int main()
{
	int *tab = NULL;
	//int i = 0;

	sort_int_tab(tab, 0);
	/*while(i <= 6)
	  {
	  printf("%d", tab[i]);
	  i++;
	  }
	  sort_int_tab(tab, 6);
	  i = 0;
	  printf("\n");
	  while(i <= 7)
	  {
	  printf("%d", tab[i]);
	  i++;
	  }*/
	return 0;


}
