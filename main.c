/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:07:58 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/01 17:32:54 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	main(int argc, char **argv)
{
	int	fd;
	int exit;
	char	*str;
	exit = 1;
	if (argc == 2 && ft_check(argv[1], ".fdf") == 1)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (0);
		while(get_next_line(fd, &str, 1) != 0)
		{
			printf("%s\n", str);
		}
	printf("%s\n", str);
	}
	else
		return (0);
	return (0);
}
