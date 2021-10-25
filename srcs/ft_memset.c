/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:47:29 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/25 18:29:54 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*src;

	count = 0;
	src = (unsigned char *)s;
	while (count < n)
	{
		src[count] = c;
		count++;
	}
	return (s);
}
