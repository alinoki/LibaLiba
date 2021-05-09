/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:26:56 by arichie           #+#    #+#             */
/*   Updated: 2021/05/09 17:27:35 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(size * count);
	if ((dest != NULL))
	{
		while (i < size * count)
		{
			*(dest + i) = 0;
			i++;
		}
	}
	return (dest);
}
