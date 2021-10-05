/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:07:58 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/05 17:28:43 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_print_error_exit(void)
{
	printf("Error\n");
	exit(1);
}

int	main_1(int fd)
{
	char	*str;
	int		size;

	size = 0;
	while (get_next_line(fd, &str) != 0)
	{
		if (ft_check_error(str) == 1)
			ft_print_error_exit();
		size++;
	}
	return (size);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*str;
	int		**tab;
	int		line;
	int		i;

	i = 0;
	line = 0;
	if (argc == 2 && ft_check(argv[1], ".fdf") == 1)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (0);
		line = main_1(fd);
		tab = ft_init_size(line + 1);
		line = -1;
		fd = open(argv[1], O_RDONLY);
		while (get_next_line(fd, &str) != 0)
		{
			tab[i] = ft_parse(str, tab[i], &line);
			i++;
		}
	}
	else
		printf("Error\n");
	return (0);
}
