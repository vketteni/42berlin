/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:26:46 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/24 16:29:43 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
size_t ft_strlcpy(char *dst, char *src, size_t dst_size)
{
    size_t i;
    i = 0;

    if (dst_size > 0)
    {
        while (i < dst_size - 1 && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i] != '\0')
        i++;
    return (i);

}
