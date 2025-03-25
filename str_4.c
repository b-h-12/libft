/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:58:23 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/25 16:02:56 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i = 0, j = 0, k;

	if (!s || !(str = (char **)malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			str[j] = (char *)malloc(strlen(s) + 1);
			if (!str[j])
				return (NULL);
			while (*s && *s != c)
				str[j][k++] = *s++;
			str[j++][k] = '\0';
		}
		else
			s++;
	}
	str[j] = NULL;
	return (str);
}

