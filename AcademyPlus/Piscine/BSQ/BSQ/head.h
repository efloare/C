/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoporii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 13:11:51 by acoporii          #+#    #+#             */
/*   Updated: 2015/09/21 16:40:45 by ohoza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int				ft_strcmp(char *s1, char *s2);
void			ft_putchar(char c);
int				ft_strlen(char *str);
void			ft_putnbr(int n);
void			ft_putstr(char *str);
int     		ft_atoi(char *str);

#endif
