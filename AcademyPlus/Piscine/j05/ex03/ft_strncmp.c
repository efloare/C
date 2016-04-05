/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 21:07:28 by efloare           #+#    #+#             */
/*   Updated: 2015/09/09 21:46:05 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char str1 [ ] = "aa2342aaaaa";
	char str2 [ ] = "aaaacbaaa";
	printf("%d",ft_strncmp(str1, str2));
	printf("%d", strcmp(str1, str2)); 
	return (0);
}
