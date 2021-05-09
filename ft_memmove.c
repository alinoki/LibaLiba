/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:26:32 by arichie           #+#    #+#             */
/*   Updated: 2021/04/21 15:30:08 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, void *src, size_t n)
{
    int i;

    i = 0;
   if (dest == NULL && src == NULL)
    return (NULL);
    if (dest <= src)
    {
        while (i < (int) n)
        {
            *(char *)(dest + i) = *(char *)(src + i);
            i++;
        }
    }
    else
    {
        i = n - 1;
        while (i >= 0)
        {
            *(char *)(dest + i) = *(char *)(src + i);
            i--;
        }
    }
    return (dest);
}
