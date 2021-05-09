/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:26:32 by arichie           #+#    #+#             */
/*   Updated: 2021/04/21 15:30:08 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s || !*s || !f)
    	return (NULL);

    size_t len = ft_strlen(s);
    size_t i = 0;
    char* map_into_me = malloc((len + 1) * sizeof(char));
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