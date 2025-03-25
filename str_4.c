/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:58:23 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/25 16:35:29 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	i = 0;
	j = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i + k] && s[i + k] != c)
				k++;
			str[j] = (char *)malloc(k + 1);
			if (!str[j])
				return (NULL);
			strncpy(str[j], &s[i], k);
			str[j][k] = '\0';
			j++;
		}
		i++;
	}
	return (str);
}
