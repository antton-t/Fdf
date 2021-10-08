/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_mlx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:18:38 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/07 18:24:13 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_execute_mlx(t_map *map)
{
	void	*mlx_ptr;
	void	*a;
	(void)map;

	mlx_ptr = mlx_init();
	a = mlx_new_window(mlx_ptr, (map->size) * 100, (map->lengh) * 100, "FDF");
	mlx_loop(a);
	free(mlx_ptr);
}
