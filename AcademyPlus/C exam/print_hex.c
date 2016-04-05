/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 21:02:46 by efloare           #+#    #+#             */
/*   Updated: 2016/02/09 21:28:54 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *s)
{
    int	total;
    int	i;
    
    total = 0;
    i = -1;
    while (s[++i] && s[i] != '\n')
        total = total * 10 + s[i] - '0';
    return (total);
}

int		main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        int value;
        int converted_number[64];
        char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        
        i = 0;
        value = ft_atoi(av[1]);
        
        while (value != 0)
        {
            converted_number[i] = value % 16;
            value = value / 16;
            i++;
        }
        i--;
        while (i >= 0)
        {
            write(1, &base_digits[converted_number[i]], 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}
