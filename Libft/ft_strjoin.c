/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:13:13 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/17 14:41:22 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_string;
	size_t	suffix_len;
	size_t	prefix_len;
	size_t	arr_size;

	arr_size = suffix_len + prefix_len + 1;
	joined_string = malloc(arr_size);
	if (joined_string == 0)
		return (0);
	ft_strlcpy(joined_string, s1, arr_size);
	ft_strlcat(joined_string, s2, arr_size);
	return (joined_string);
}