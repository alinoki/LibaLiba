/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:34:33 by arichie           #+#    #+#             */
/*   Updated: 2021/05/09 19:47:34 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_strings(const char *s, char c)
{
	size_t	count;
	int		i;
	char	prev;

	count = 0;
	i = 0;
	prev = -1;
	while (s[i])
	{
		if ((s[i] != c) && ((prev == c) || (prev == -1)))
			count++;
		prev = s[i];
		i++;
	}
	return (count);
}

char	*get_slice(const char *s, int begin, int end)
{
	int		k;
	char	*slice;

	k = begin;
	slice = malloc(sizeof(char) * (end - begin + 2));
	while (k < end)
	{
		slice[k - begin] = s[k];
		++k;
	}
	slice[k - begin] = '\0';
	return (slice);
}

char	**ft_split(const char *s, char c)
{
	char	**dest;
	int		begin;
	int		end;
	int		i;
	int		counter;

	begin = -1;
	end = -1;
	i = 0;
	counter = 0;
	dest = malloc(sizeof(char *) * (ft_count_strings(s, c) + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		if ((s[i] == c) && (begin == -1))
		{
			i++;
			continue ;
		}
		if (s[i] != c)
		{
			if (begin == -1)
				begin = i;
			end = i + 1;
		}
		if (s[i] == c)
		{
			if (begin != -1)
			{
				dest[counter] = get_slice(s, begin, end);
				counter++;
				begin = -1;
				end = -1;
			}
		}
		i++;
	}
	if (begin != -1)
	{
		dest[counter] = get_slice(s, begin, i);
		counter++;
	}
	dest[counter] = NULL;
	i = 0;
	return (dest);
}
