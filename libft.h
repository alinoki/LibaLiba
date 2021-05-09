/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:10:22 by arichie           #+#    #+#             */
/*   Updated: 2021/04/21 15:10:36 by arichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//libs
# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_split_next
{
	size_t start;
	size_t length;
}				t_split_next;

//funcs
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
int     ft_atoi(const char *str);
void    *ft_memcpy(void *dest, void *src, size_t n);
void    *ft_memccpy(void *dest, void *src, int c, size_t n);
void    *ft_memmove(void *dest, void *src, size_t n);
void    *ft_memchr(void *s, int c, size_t n);
int     ft_memcmp(void *s1, void *s2, size_t n);
size_t  ft_strlen(const char *s);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s);
char    *ft_substr(const char *s, unsigned int start, size_t len);
char    *ft_strjoin(const char *s1, const char *s2);
char    *ft_strtrim(const char *s1, const char *set);
char    **ft_split(const char *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif
