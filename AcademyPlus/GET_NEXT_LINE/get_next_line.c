/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 13:56:41 by efloare           #+#    #+#             */
/*   Updated: 2016/02/15 13:57:57 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		read_to_stock(int const fd, char **stock)
{
	char	*buff;
	int		ret;
	char	*temp;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		temp = ft_strjoin(*stock, buff);
		free(*stock);
		*stock = temp;
	}
	free(buff);
	return (ret);
}

int				get_next_line(int const fd, char **line)
{
	static char	*stock = NULL;
	char		*bn;
	int			ret;

	if ((!stock && (stock = (char *)malloc(sizeof(*stock))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	bn = ft_strchr(stock, '\n');
	while (bn == NULL)
	{
		ret = read_to_stock(fd, &stock);
		if (ret == 0)
		{
			if (ft_strlen(stock) == 0)
				return (0);
			stock = ft_strjoin(stock, "\n");
		}
		if (ret < 0)
			return (-1);
		else
			bn = ft_strchr(stock, '\n');
	}
	*line = ft_strsub(stock, 0, ft_strlen(stock) - ft_strlen(bn));
	stock = ft_strdup(bn + 1);
	return (1);
}
