/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoporii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 13:11:51 by acoporii          #+#    #+#             */
/*   Updated: 2015/09/24 17:02:16 by ohoza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_tot
{
	char	tab2[3];
	char	tab1[10];
	int		y;
	int		x;
	char	**str;
	int		error;
	char	**argv;
	int		itab1;
	int		p;
	int		i;
	int		j;
	int		okp;
	int		sy;
	int		sx;
	int		sp;
	int		nr_file;
}				t_tot;

int				ft_strcmp(char *s1, char *s2);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
void			afisare(t_tot tot);
t_tot			map_error2(t_tot tot, int i, int j, char buffer);
t_tot			map_error(t_tot tot, int i);
t_tot			map_error3(t_tot tot, int i, int stop2, int stop);
t_tot			patrat(t_tot tot);
t_tot			scriere_patrat(t_tot tot);
t_tot			verifica_patrat(t_tot tot);

#endif
