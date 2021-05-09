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

static  int     ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

static  int     ft_is_negative(int n)
{
    if (n < 0)
        return (1);
    return (0);
}

static void     ft_strrev(char *str)
{
	size_t	length;
	size_t	i;
	char	temp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
		i++;
	}
}

char    *ft_itoa(int n)
{
    size_t  i;
    int     temp;
    char    *dest;

    i = 0;
    temp = n;
    while (temp / 10 != 0)
    {
       i++;
       temp /= 10;
    }
    temp = ft_is_negative(n); 
	if (!(dest = ft_calloc(11 + (n < 0), sizeof(char *))))
        return (NULL);
    if (n == 0)
        dest[0] = '0';
    i = 0;
    while (n != 0)
    {
        dest[i] = ft_abs(n % 10) + '0';
        n /= 10;
        i++;
    }
    if (temp)
        dest[i] = '-';
    ft_strrev(dest);
    dest[i + 1] = '\0';
    return (dest);
}