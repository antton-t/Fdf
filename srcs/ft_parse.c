/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:12:20 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/04 15:55:20 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	ft_count_num(char *str)
{
	int	count;
	int	i;
	int	space;

	count = 0;
	i = 0;
	space = 1;
	while (str[i])
	{
		if (space == 1 && ((str[i] =='-' || str[i] == '+') || (str[i] >= '0'
					&& str[i] <= '9')))
		{
			count++;
			space = 0;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		while (str[i] == ' ')
		{
			space = 1;
			i++;
		}
	}
	return (count);
}

int	*ft_parse(char *line, int *tab)
{
	int	size;
	int	j;

	j = 0;
	size = ft_count_num(line);
	tab = (int *)malloc(sizeof(int) * (size + 1));
	if (tab == NULL)
		return (NULL);
	while (*line)
	{
		while ((*line) == ' ')
			line++;
		tab[j] = ft_atoi(&line);
		j++;
	}
	tab[j] = 0;
	return (tab);
}
