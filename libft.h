/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:32:34 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/25 15:07:23 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

int		isalpha(int c);
int		isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);
int		strlen(const char *s);
int		strlcpy(char *dst, const char *src, size_t size);
int		strlcat(char *dst, const char *src, size_t size);
int		strncmp(const char *s1, const char *s2, size_t n);
char	*strnstr(const char *big, const char *little, size_t len);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strdup(const char *s);
void	toupper(char *s);
void	tolower(char *s);
void	*memset(void *s, int c, size_t n);
void	*memcpy(void *dst, const void *src, size_t n);
void	bzero(void *s, size_t n);
void	*memmove(void *dst, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
void	*calloc(size_t nmemb, size_t size);
int		atoi(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*strncpy(char *dst, const char *src, size_t len);
#endif