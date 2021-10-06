/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:22:11 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/06 15:41:08 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

t_map	*ft_init_map(void)
{
	t_map	*new;

	new = (t_map *)malloc(sizeof(t_map));
	if (new == NULL)
		exit(1);
	new->fd = -1;
	new->size = 0;
	new->lengh = -1;
	new->tab = NULL;
	return (new);
}
