/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:26:32 by arichie           #+#    #+#             */
/*   Updated: 2021/04/21 15:30:08 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t k;

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
                {
                    if ((*(char *)(haystack + i + j)) != *(char *)(needle + j))
                        return (NULL);
                }
            if (i + j > len)
	            return (NULL);
            if ((*(char *)(haystack + i + j)) != *(char *)(needle + j))
                {
                    break;
                }
            if (!(*(char *)(needle + j + 1)))
            {
                return ((char *)(haystack + i));
            }
            
            //printf("%c\t %c\t %zu\t %zu\n", *(char *)(needle + i + j), *(char *)(needle + j), i, j);
            j++;
        }
        i++;
    }
    return(NULL);
}