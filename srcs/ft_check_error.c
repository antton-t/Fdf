/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:41:38 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/04 17:34:05 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	ft_check_error(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if ((line[i] == '+' || line[i] == '-') && (line[i + 1] == '-'
					|| line[i + 1] == '+'))
			return ( 1);
		if ((line[i + 1] >= '0' || line[i + 1] <= '9') &&
				(line[i + 1] == '-' || line[i + 1] == '+'))
			return (1);
		if ((line[i] == '+' || line[i] == '-') && (line[i + 1] == ' '))
			return (1);
		if ((line[i] >= '0' && line[i] <= '9') || line [i] == ' '
			|| line[i] == '+' || line[i] == '-')
			i++;
		else
			return (1);
	}
	return (0);
}
