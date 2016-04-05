/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 18:39:07 by efloare           #+#    #+#             */
/*   Updated: 2015/09/08 22:01:10 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		a;
	int		b;
	char	*p;

	a = 0;
	b = 0;
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
			b = 0;
			if (p[0] == str[a])
				a--;
		}
		if (to_find[b] == '\0')
			return (p);
		a++;
	}
	return (NULL);
}
