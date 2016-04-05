/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 13:03:28 by efloare           #+#    #+#             */
/*   Updated: 2015/11/03 19:17:20 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newcontent;

	if (!(newcontent = (t_list*)malloc(sizeof(*newcontent) * (content_size))))
		return (NULL);
	if (content)
	{
		newcontent->content = (void *)content;
		newcontent->content_size = content_size;
		newcontent->next = NULL;
	}
	else
	{
		newcontent->content = NULL;
		newcontent->content_size = 0;
		newcontent->next = NULL;
	}
	return (newcontent);
}
