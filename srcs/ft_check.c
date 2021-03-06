/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:30:45 by antton-t          #+#    #+#             */
/*   Updated: 2021/10/04 11:00:23 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	ft_check(char *str, char *end)
{
	while (*str && *end && *str == *end)
	{
		str++;
		end++;
		if (*str == '\0' && *end == '\0')
			return (1);
	}
	while (*str != '.' && *str)
		str++;
	while (*str && *end && *str == *end)
	{
		str++;
		end++;
		if (*str == '\0' && *end == '\0')
			return (1);
	}
	return (0);
}
