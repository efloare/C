/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 22:38:24 by efloare           #+#    #+#             */
/*   Updated: 2015/09/09 23:24:11 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		is_number(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int		is_upercase(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int		is_lowercase(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

void	strlow(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_upercase(str[i]))
			str[i] -= 'a' - 'A';
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	strlow(str);
	if (is_lowercase(str[0]))
		str[0] -= ('a' - 'A');
	i = 1;
	while (str[i])
	{
		if (!is_number(str[i - 1]) && !is_upercase(str[i - 1]) &&
				!is_lowercase(str[i - 1]))
			if (is_lowercase(str[i]))
				str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
int	main(void)
{
	char str [ ] = "salut, ce faci? 42cuvinte patruzeci-doi; cincizeci+si+unu";
	printf("%s", ft_strcapitalize (str));
	return (0);
}
