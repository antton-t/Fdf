/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:45:22 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/25 18:17:17 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	res_size;
	void	*p;

	res_size = size * count;
	p = malloc(res_size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, res_size);
	return (p);
}
