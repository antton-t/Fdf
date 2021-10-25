/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:07:58 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/25 15:43:29 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_print_error_exit(void)
{
	write(1,"Error\n", 6);
	exit(1);
}

int	main_1(int fd)
{
	char	*str;
	int		size;

	size = 0;
	while (get_next_line(fd, &str, 1) != 0)
	{
		if (ft_check_error(str) == 1)
			ft_print_error_exit();
		free(str);
		size++;
	}
	return (size);
}

int	ft_map_open(char **argv, t_map **map)
{
	(*map)->fd = open(argv[1], O_RDONLY);
	if ((*map)->fd < 0)
		return (-1);
	(*map)->size = main_1((*map)->fd);
	(*map)->tab = ft_init_size((*map)->size + 1);
	(*map)->lengh = -1;
	close((*map)->fd);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	t_map	*map;

	i = 0;
	map = NULL;
	if (argc == 2 && ft_check(argv[1], ".fdf") == 1)
	{
		map = ft_init_map();
		if (ft_map_open(argv, &map) == -1)
			ft_print_error_exit();
		map->fd = open(argv[1], O_RDONLY);
		while (get_next_line(map->fd, &str, 1) != 0 && i <= map->size)
		{
			map->tab[i] = ft_parse(str, map->tab[i], &(map->lengh), map->size);
			i++;
		}
		close (map->fd);
		ft_execute_mlx(map);
	}
	else
		printf("Error\n");
	return (0);
}
