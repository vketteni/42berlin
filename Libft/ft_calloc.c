/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:48:33 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/17 13:16:42 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*result_ptr;

	total_size = nmemb * size; 
	if (total_size > SIZE_MAX || total_size == 0)
		return (0);
	result_ptr = malloc(total_size);
	result_ptr = ft_memset(result_ptr, 0, total_size);
	return (result_ptr);
}