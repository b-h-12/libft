/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrarray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamoum <bhamoum@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:51:56 by bhamoum           #+#    #+#             */
/*   Updated: 2025/05/09 20:59:37 by bhamoum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freestrarray(char ***array)
{
    int	i;
    char **temp;

    if (!array || !*array)
        return ;
    
    temp = *array;
    i = 0;
    while (temp[i])
    {
        free(temp[i]);
        i++;
    }
    free(temp);
    *array = NULL;
}
