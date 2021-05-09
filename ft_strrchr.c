/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:26:32 by arichie           #+#    #+#             */
/*   Updated: 2021/04/21 15:30:08 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen((char *)s);
    while (i >= 0)
    {
        if (*(char *)(s + i) == (char)c)
            return ((char *)(s + i));
         i--;
    }
    return (NULL);
}
