/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:42:02 by bhamoum           #+#    #+#             */
/*   Updated: 2025/03/24 15:07:04 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	//test strlcopy
	char src[] = "Hello";
	char dest[10];
	strlcpy(dest, src, 5);
	printf("%s\n", dest);
	//test strlcat
	char src1[] = "Hello";
	char dest1[10] = "World";
	strlcat(dest1, src1, 9);
	printf("%s\n", dest1);
	
	return (0);
}