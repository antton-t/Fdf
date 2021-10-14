/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_mlx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:18:38 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/14 19:00:38 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_my_mlx_pixel_put(t_img *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_len + x * (data->bpp / 8));
	*(unsigned int*)dst = color;
}

void	ft_execute_mlx(t_map *map)
{
	map->mlx_ptr = mlx_init();
	if (map->mlx_ptr == NULL)
		exit (1);
	printf("size %i lengh %i\n",map->size, map->lengh);
	map->mlx_exe = mlx_new_window(map->mlx_ptr, 1920, 1080, "FDF");
	map->mlx_img = mlx_new_image (map->mlx_ptr, 1920, 1080);
	//ft_draw(map);
	mlx_put_image_to_window(map->mlx_ptr, map->mlx_exe, map->mlx_img, 0, 0);
	if (map->mlx_exe == NULL)
	{
		free(map->mlx_exe);
		exit (1);
	}

	mlx_loop(map->mlx_exe);
	free(map->mlx_ptr);
}
