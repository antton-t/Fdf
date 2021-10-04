/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:07:58 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/02 17:59:20 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	main(int argc, char **argv)
{
	int	fd;
	char	*str;
	int	**tab;
	int	line;

	line = 0;
	if (argc == 2 && ft_check(argv[1], ".fdf") == 1)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (0);
		while(get_next_line(fd, &str) != 0)
		{
			printf("%s\n", str);
			line++;
		}
	tab = (int **)malloc(sizeof(int*) * (line + 1));
	if (tab == NULL)
		return (0);
	printf("%i\n", line);
	}
	else
		return (0);
	return (0);
}
