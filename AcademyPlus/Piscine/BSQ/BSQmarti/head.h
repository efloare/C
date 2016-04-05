/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoporii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 13:11:51 by acoporii          #+#    #+#             */
/*   Updated: 2015/09/22 15:07:21 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_tot 
{
	char	tab[3];
	int		y;
	int		x;
}				t_tot;

int				ft_strcmp(char *s1, char *s2);
void			ft_putchar(char c);
int				ft_strlen(char *str);
void			ft_putnbr(int n);
void			ft_putstr(char *str);
int     		ft_atoi(char *str);
void			afisare(char **str, t_tot tot);

#endif
