/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 22:28:16 by efloare           #+#    #+#             */
/*   Updated: 2015/09/10 23:18:15 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (('a' <= str[index] && 'j' >= str[index])
			|| ('A' <= str[index] && 'J' >= str[index]))
		{
			str[index] += 16;
		}
		else if (('k' <= str[index] && 'z' >= str[index])
				|| ('K' <= str[index] && 'Z' >= str[index]))
		{
			str[index] = str[index] - 10;
		}
	index++;
	}
	return (str);
}
