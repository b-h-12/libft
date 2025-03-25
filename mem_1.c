/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:39:21 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/25 13:01:03 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n-- && str)
		*str++ = chr;
	return (s);
}

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n-- && str1 && str2)
		*str1++ = *str2++;
	return (dst);
}

void	bzero(void *s, size_t n)
{
	memset(s, 0, n);
}

void	*memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str1 < str2)
	{
		while (n-- && str1 && str2)
			*str1++ = *str2++;
	}
	else
	{
		str1 += n;
		str2 += n;
		while (n-- && str1 && str2)
			*--str1 = *--str2;
	}
	return (dst);
}

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n-- && str)
	{
		if (*str == chr)
			return (str);
		str++;
	}
	return (NULL);
}