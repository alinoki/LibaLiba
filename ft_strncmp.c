/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:26:32 by arichie           #+#    #+#             */
/*   Updated: 2021/04/21 15:30:08 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*(unsigned char*)(s1 + i) || *(unsigned char*)(s2 + i)) && (i < n))
	{
		if (*(unsigned char*)(s1 + i) < *(unsigned char*)(s2 + i))
			return (-1);
		if (*(unsigned char*)(s1 + i) > *(unsigned char*)(s2 + i))
			return (1);
		i++;
	}
	return (0);
}