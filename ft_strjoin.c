/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:29:43 by arichie           #+#    #+#             */
/*   Updated: 2021/05/09 17:31:59 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*dest;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	dest = malloc((len1 + len2 + 1) * sizeof(char));
	if (!s1 || !s2)
		return (NULL);
	if (!dest)
		return (NULL);
	while (i < len1)
	{
		*(dest + i) = *(char *)(s1 + i);
		i++;
	}
	while (i < len2 + len1)
	{
		*(dest + i) = *(char *)(s2 + i - len1);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
