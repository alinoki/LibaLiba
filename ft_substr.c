/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:28:44 by arichie           #+#    #+#             */
/*   Updated: 2021/05/09 17:29:27 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	dest = malloc((len + 1) * sizeof(*s));
	if (dest != NULL)
	{
		while ((i < len) && (start <= ft_strlen(s)))
		{
			*(dest + i) = *(char *)(s + start + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	else
		return (NULL);
	return (dest);
}
