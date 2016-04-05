/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 17:09:21 by efloare           #+#    #+#             */
/*   Updated: 2015/09/10 17:39:43 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define LEN 42

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int counter;

    counter = 0;
    while (str[counter])
    {
        ft_putchar(str[counter]);
        counter++;
    }
}

int main()
{
    int i;
    char *str;

    str = (char*)malloc(sizeof(*str) * (LEN + 1));
    i = 0;
    while (i < LEN)
    {
        str[i] = '0' + (i % 10);
        i++;
    }
    str [i] = '\0';
    ft_putstr(str);
    return (0);
}