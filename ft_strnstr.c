/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:18:21 by arichie           #+#    #+#             */
/*   Updated: 2021/05/09 19:15:51 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen((char *)needle);
	if (!*(char *)(needle + i))
		return ((char *)(haystack + i));
	while ((*(char *)(haystack + i)) && (i < len))
	{
		while (*(char *)(needle + j))
		{
			if (j == k - 1)
				if (((haystack[i + j]) != needle[j]) || (i + j > len))
					return (NULL);
			if ((*(char *)(haystack + i + j)) != *(char *)(needle + j))
				break ;
			if (!(*(char *)(needle + j + 1)))
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
