/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 14:26:50 by efloare           #+#    #+#             */
/*   Updated: 2015/09/16 19:17:20 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "list.h"

int a

int main(void)
{
	t_list *list;

	list = NULL;


	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");	
	list = add_link(list, "tutu\n");

	print_list(list);

	return (0);
}
