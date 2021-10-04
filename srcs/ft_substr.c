/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:55:51 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/04 10:18:28 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ss;
	unsigned int	i;

	i = 0;
	ss = malloc(sizeof(*ss) * (len + 1));
	if (!s || ss == NULL)
		return (NULL);
	while (ft_strlen(s) > start && i < len)
		ss[i++] = s[start++];
	ss[i] = '\0';
	return (ss);
}
