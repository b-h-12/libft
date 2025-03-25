/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:41:58 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/25 15:53:17 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	val;

	i = 0;
	sign = 1;
	val = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + (str[i] - '0');
		i++;
	}
	return (val * sign);
}

int	power_of_ten(int n)
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
