/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_mlx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:18:38 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/13 15:23:37 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_execute_mlx(t_map *map)
{
	int x = 150;
	int y = 150;

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
	map->mlx_img = mlx_new_image(map->mlx_ptr, 1500, 800);
int pixel_bits;
int line_bytes;
int endian;
char *buffer;
buffer = mlx_get_data_addr(map->mlx_img, &pixel_bits, &line_bytes, &endian);
	while (x < 1000)
	{
		mlx_pixel_put(map->mlx_ptr, map->mlx_exe, x, y, 40);
		x++;
	}
	while (y < 500)
	{
		mlx_pixel_put(map->mlx_ptr, map->mlx_exe, x, y, 40);
		y++;
	}
	mlx_put_image_to_window(map->mlx_ptr, map->mlx_exe, map->mlx_img, 0, 0);
	mlx_loop(map->mlx_exe);
	free(map->mlx_ptr);
}
