/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 13:03:54 by efloare           #+#    #+#             */
/*   Updated: 2016/02/15 14:59:33 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include "get_next_line.h"

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;
	int	i;

	if (argc < 2)
	{
		printf("usage: ./test_gnl file1 file2 etc.\n");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		while (get_next_line(fd, &line) > 0)
		{
			printf("%s\n", line);
		}
		close(fd);
		i++;
	}
	return (0);
}
