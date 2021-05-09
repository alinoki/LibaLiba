/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:32:14 by arichie           #+#    #+#             */
/*   Updated: 2021/05/09 17:34:17 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set_check(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (*(char *)(set + i))
	{
		if (*(char *)(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*dest;
	size_t	i;
	size_t	first;
	size_t	last;

	i = 0;
	first = 0;
	last = ft_strlen(s1);
	while (*(s1 + first) && ft_set_check(set, *(s1 + first)))
		first++;
	while ((last > first) && ft_set_check(set, *(s1 + last - 1)))
		last--;
	dest = malloc(sizeof(s1) * (last - first + 1));
	if (!dest)
		return (NULL);
	while (first < last)
	{
		*(dest + i) = *(char *)(s1 + first);
		i++;
		first++;
	}
	*(dest + i) = '\0';
	return (dest);
}
