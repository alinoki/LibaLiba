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

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t len1;
    size_t len2;
    size_t i;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    i = 0;
    if (!s1 || !s2)
		return NULL;
    char* dest = malloc((len1 + len2 + 1) * sizeof(char));
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