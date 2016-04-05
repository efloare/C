/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 14:19:48 by efloare           #+#    #+#             */
/*   Updated: 2015/09/16 19:17:08 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIST_H
# define __LIST_H

typedef struct s_list t_list;

struct s_list
{
	char *str;
	t_list *next;
};
typedef struct s_list
{
	struct s_list *next;
	void *data;
} 				t_list;

t_list *add_link(t_list *list, char *str);
void	print_list(t_list *list);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
