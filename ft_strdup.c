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

char *ft_strdup(const char *s)
{
    char *dest;
    int i;

    i = 0;
    dest = malloc((ft_strlen(s) + 1) * sizeof((char *)s));
    if (dest == NULL)
        return (NULL);
    if (dest != NULL)
    {
        while (ft_strlen((char *)(s + i)))
        {
            *(dest + i) = *(char *)(s + i);
            i++;
        }
    }
    else
        return (NULL);
    *(dest + i) = '\0';
    return (dest);
}