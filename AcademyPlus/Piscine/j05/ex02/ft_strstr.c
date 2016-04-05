/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 18:39:07 by efloare           #+#    #+#             */
/*   Updated: 2015/09/09 19:07:58 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ifs(char i, char j, int *a, int *b)
{
	*b = 0;
	if (i == j)
		a = a - 1;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		a;
	int		b;
	char	*p;

	a = 0;
	b = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		if (str[a] == to_find[b])
		{
			b++;
			if ((str[a] == to_find[0]) && (b == 1))
				p = &str[a];
		}
		else
		{
			ifs(p[0], str[a], &a, &b);
		}
		if (to_find[b] == '\0')
			return (p);
		a++;
	}
	return (0);
}

int		main(void)
{
	printf("%s", ft_strstr("mama are mere", "a"));
	return (0);
}
