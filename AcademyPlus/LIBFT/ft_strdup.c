/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 21:42:28 by efloare           #+#    #+#             */
/*   Updated: 2015/10/26 22:39:46 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*c;

	c = (char*)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (c != 0)
	{
		ft_strcpy(c, src);
		return (c);
	}
	else
		return (0);
}
