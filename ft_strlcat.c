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

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t srclen;
    size_t dstlen;
    size_t i;

    dstlen = 0;
    srclen = ft_strlen((char *)src);
	while (*(dst + dstlen) && dstlen < dstsize)
		dstlen++;
    i = dstlen;
    while (*(char *)(src + dstlen - i) && (dstlen + 1 < dstsize))
    {
        *(dst + dstlen) = *(char *)(src + dstlen - i);
        dstlen++;
    }
    if (i < dstsize)
		*(dst + dstlen) = '\0';
    return (i + srclen);
}