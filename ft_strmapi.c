/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:51:17 by arichie           #+#    #+#             */
/*   Updated: 2021/05/09 17:53:34 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*map_into_me;

	len = ft_strlen(s);
	i = 0;
	map_into_me = malloc((len + 1) * sizeof(char));
	if (!s || !*s || !f)
		return (NULL);
	if (!map_into_me)
		return (NULL);
	while (i < len)
	{
		map_into_me[i] = f(i, s[i]);
		i++;
	}
	map_into_me[i] = '\0';
	return (map_into_me);
}
