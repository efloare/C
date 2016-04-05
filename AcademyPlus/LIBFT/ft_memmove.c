/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 21:14:27 by efloare           #+#    #+#             */
/*   Updated: 2015/10/26 21:16:56 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str;

	if (!dst || !src)
		return (NULL);
	str = (unsigned char*)malloc(sizeof(*str) * n);
	ft_memcpy(str, src, n);
	ft_memcpy(dst, str, n);
	free(str);
	return (dst);
}
