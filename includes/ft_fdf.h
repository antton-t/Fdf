/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:35:01 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/13 15:23:08 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "mlx.h"


typedef	struct	l_map
{
	int	fd;
	int	size;
	int	lengh;
	int	**tab;
	void	*mlx_ptr;
	void	*mlx_exe;
	void	*mlx_img;
	void	*mlx_img_ptr;
}				t_map;

typedef struct	s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp; /* bits per pixel */
	int		line_len;
	int		endian;
}				t_img;

t_map	*ft_init_map(void);
int	ft_check(char *argv, char *end);
int	get_next_line(int fd, char **line, int BUFFER_SIZE);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
void	ft_execute_mlx(t_map *map);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
int	*ft_parse(char *str, int *tab, int *i, int taille);
int	ft_check_error(char *line);
int	ft_atoi(char **line);
int	**ft_init_size(int size);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *s, int c, size_t n);

# endif
