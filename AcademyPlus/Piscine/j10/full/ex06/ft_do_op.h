/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 20:07:20 by lboieru           #+#    #+#             */
/*   Updated: 2015/09/15 20:40:51 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
long	ft_atoi(char *str);

long	sum(long a, long b);
long	subtract(long a, long b);
long	mul(long a, long b);
long	div(long a, long b);
long	mod(long a, long b);

#endif
