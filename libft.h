/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:32:34 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/24 15:14:55 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long size_t;

int	isalpha(int c);
int	isdigit(int c);
int	isalnum(int c);
int	isascii(int c);
int	isprint(int c);
int	strlen(const char *s);
int	strlcpy(char *dst, const char *src, size_t size);
int	strlcat(char *dst, const char *src, size_t size);
int	strncmp(const char *s1, const char *s2, size_t n);
char		*strnstr(const char *big, const char *little, size_t len);

#endif