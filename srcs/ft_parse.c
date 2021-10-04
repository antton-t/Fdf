/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:12:20 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/02 18:09:29 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	ft_parse(char *line, int *tab)
{
	int	i;
	int	size;
	int	j;

	j = 0;
	i = 0;
	if (ft_check_error(line) == 1)
		return (0);
	size = ft_strlen(line);
	tab = (int *)malloc(sizeof(int) * (size + 1));
	while (*line)
	{
		while ((*line) == ' ')
			(*line)++;
		tab[j] = ft_atoi(&line);
		j++;
	}
	return (1);
}
