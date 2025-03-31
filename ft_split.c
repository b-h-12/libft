/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:10:28 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/31 15:25:47 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

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
			ft_strncpy(str[j], &s[i], k);
			str[j][k] = '\0';
			j++;
		}
		i++;
	}
	return (str);
}
