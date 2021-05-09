/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:26:32 by arichie           #+#    #+#             */
/*   Updated: 2021/04/21 15:30:08 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, void *src, int c, size_t n)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    while (i < n)
    {
        *(unsigned char *)(dest + i) = *(unsigned char*)(src + i);
        if (*(unsigned char *)(src + i) == (unsigned char) c)
        {
            j++;
            return (dest + i + 1);
        }
        i++;
    }
    if (j == 0)
        return (NULL);
    return (dest);
}
