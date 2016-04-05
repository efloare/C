/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 22:37:49 by lboieru           #+#    #+#             */
/*   Updated: 2015/09/15 23:27:57 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
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
