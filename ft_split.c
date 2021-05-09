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

static int ft_count_strings(const char *s, char c)
{
    // Count number of strings to split 's' to
    size_t count;
    int i;

    count = 0;
    i = 0;
    char prev = -1;
    while (s[i])
    {
        if ((s[i] != c) && ((prev == c) || (prev == -1)))
            count++;
        prev = s[i];
        i++;
    }
    return count;
}

char* get_slice(const char *s, int begin, int end) {
    // Get slice s[begin, end)
    int k;
    char* slice = malloc(sizeof(char) * (end - begin + 2));
    for (k = begin; k < end; ++k) {
        slice[k - begin] = s[k];
    }
    slice[k - begin] = '\0';
    return slice;
}

char **ft_split(const char *s, char c)
{
//    char *p;
    char **dest;
    int begin, end, i, counter;
    int num_strings;

    begin = -1;
    end = -1;
    i = 0;
    counter = 0;

    num_strings = ft_count_strings(s, c);
    dest = malloc(sizeof(char *) * (num_strings + 1));
    if (!dest)
        return (NULL);
    while (s[i])
    {
        // Handle first delimiters
        if ((s[i] == c) && (begin == -1)){
            i++;
            continue;
        }
        
        // If it's not a delimiter update 'end' index and set 'begin' index if it wasn't set
        if (s[i] != c) {
            if (begin == -1) {
                begin = i;
            }
            end = i + 1;
        }

        // If it's a delimiter and we have 'begin' and 'end' indexes get our slice
        if (s[i] == c) {
            if (begin != -1) {
                dest[counter] = get_slice(s, begin, end);

                counter++;
                begin = -1;
                end = -1;
            }
        }
        i++;
    }
    if (begin != -1) {
        dest[counter] = get_slice(s, begin, i);
        counter++;
    }
    dest[counter] = NULL;


    i = 0;
//    while (dest[i])
//        printf("%s|", dest[i++]);
//    printf("\n");
    return (dest);
}


/*int main()
{
    char s[] = ";hi;;;there;;how;;;are;you;;";
    char s1[] = "//hi/there";
    char s2[] = "ol ol                     ";
    char s3[] = "0 0 0 0 0 0 0 0 0";
    char *s4 = "      split       this for   me  !       \0";
    char c = ';';
    char c1 = '/';
    char c2 = ' ';

    //ft_split(s, c);
    //ft_split(s1, c1);
    //ft_split(s2, c2);
    //ft_split(s3, c2);
    //ft_split(s4, c2);
    //printf("%d\n", ft_count_strings(s4, c2));
    //printf("%s", get_slice(s1, 2, 4));
    ft_split(s4, c2);
    return (0);
}*/