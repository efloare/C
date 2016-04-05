/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 15:02:16 by lboieru           #+#    #+#             */
/*   Updated: 2015/09/16 15:16:03 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *s1, char *s2))
{
	int		ok;
	int		i;
	char	*aux;

	ok = 0;
	while (!ok)
	{
		ok = 1;
		i = 1;
		while (tab[i])
		{
			if ((*cmp)(tab[i - 1], tab[i]) > 0)
			{
				aux = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = aux;
				ok = 0;
			}
			++i;
		}
	}
}
