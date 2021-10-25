/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:45:03 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/25 18:06:29 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_get_max_min(t_map **map)
{
	int	i;
	int	j;
	int	size_max;
	int	lengh_max;

	i = 0;
	size_max = 0;
	lengh_max = 0;
	while (size_max < 11)
	{
		j = 0;
		lengh_max = 0;
		while (lengh_max < 19)
		{
			if (i == 0 && j == 0)
			{
				(*map)->hight_min = (*map)->tab[i][j];
				(*map)->hight_max = (*map)->tab[i][j];
			}
			else if ((*map)->tab[i][j] > (*map)->hight_max)
				(*map)->hight_max = (*map)->tab[i][j];
			else if ((*map)->tab[i][j] < (*map)->hight_min)
				(*map)->hight_min = (*map)->tab[i][j];
			j++;
			lengh_max++;
		}
		size_max++;
		i++;
	}
}

void	ft_draw_img(t_map *map)
{
	ft_get_max_min(&map);

}
