/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 16:15:18 by efloare           #+#    #+#             */
/*   Updated: 2015/09/17 17:55:23 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIST_H
# define __FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);

#endif