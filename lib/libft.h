/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:30:17 by enucci            #+#    #+#             */
/*   Updated: 2025/12/12 18:06:46 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <unistd.h>

void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum (char c);
int ft_isalpha (char c);
int ft_isascii (char c);
int ft_isdigit (char c);
int ft_isprint (char c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void ft_memset(void *p, int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int	ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strrchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);

#endif