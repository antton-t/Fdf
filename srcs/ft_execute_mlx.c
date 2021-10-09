/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_mlx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:18:38 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/08 18:55:51 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_execute_mlx(t_map *map)
{
	map->mlx_ptr = mlx_init();
	if (map->mlx_ptr == NULL)
		exit (1);
	printf("size %i lengh %i\n",map->size, map->lengh);
	map->mlx_exe = mlx_new_window(map->mlx_ptr, 1920, 1080, "FDF");
	if (map->mlx_exe == NULL)
	{
		free(map->mlx_exe);
		exit (1);
	}
	map->mlx_img = mlx_new_image(map->mlx_ptr, (map->size), (map->lengh));
	mlx_loop(map->mlx_exe);
	free(map->mlx_ptr);
}
