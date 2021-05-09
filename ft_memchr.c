/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:26:32 by arichie           #+#    #+#             */
/*   Updated: 2021/04/21 15:30:08 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*(unsigned char *)(s + i) == (unsigned char) c)
            return (s + i);
        i++;
    }
    return (NULL);
}

/*int main(int argc, char *argv[])
{
    unsigned char src[10] = "1234567890";
    char *sym;

    printf("src = %s\n", src);
    sym = ft_memchr(src, '4', 10);
    if (sym != NULL)
        sym[0] = '!';
    printf("src updated = %s\n", src);

    return (0);
}*/