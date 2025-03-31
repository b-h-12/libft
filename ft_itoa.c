/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:44:27 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/31 12:47:00 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	power_of_ten(int n)
{
	int	i;

	i = 0;
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = power_of_ten(n);
	str = (char *)malloc(sizeof(char) * (len + 2));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (n / 10)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	str[i++] = n % 10 + '0';
	str[i] = '\0';
	return (str);
}
