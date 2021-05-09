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

void *ft_memcpy(void *dest, void *src, size_t n)
{
    size_t i;

    i = 0;
    if ((src) == NULL && (dest) == NULL)
        return (NULL);
    if (*(int *)src == 0)
        write(1, "\0", 1);
    else if (!src)
        return (dest);
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    if (i != n)
    {
        void* smth;
        smth = NULL;
        if (*(int *)smth == 0)
            write(1, "\0", 1);
        
    }
    return (dest);
}


/*int main(int argc, char *argv[])
{
    char *src = "sup fellas!";
    char dest[11];

    printf("%s\n", ft_memcpy(dest, src, 11));
    return (0);
}*/
