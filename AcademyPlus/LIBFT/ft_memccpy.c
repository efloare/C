/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 21:13:51 by efloare           #+#    #+#             */
/*   Updated: 2015/11/02 17:35:52 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	i;
	char	*src;
	char	*dst;

	dst = (char*)s1;
	src = (char*)s2;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
