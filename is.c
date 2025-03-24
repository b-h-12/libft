/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:43:08 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/24 14:37:39 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
int isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	return (0);
}
int isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
int isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
