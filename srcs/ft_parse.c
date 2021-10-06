/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:12:20 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/06 17:37:47 by antton-t         ###   ########.fr       */
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

int	*ft_parse(char *line, int *tab, int *i)
{
	int	size;
	int	j;
	int	k;

	j = 0;
	size = ft_count_num(line);
	if ((*i) == -1)
		(*i) = size;
	else
	{
		k = size;
		if ((*i) != k)
		{
			printf("%i 1 %i 2Error\n",(*i),k);
			exit(1);
		}
	}
	tab = ft_calloc(sizeof(int), (size +1));
	if (tab == NULL)
		return (NULL);
	while (*line)
	{
		while ((*line) == ' ')
			line++;
		tab[j] = ft_atoi(&line);
printf("%i ",tab[j]);
		j++;
	}
printf("\n");
	return (tab);
}
