/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:12:45 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/16 13:49:22 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *src, char c)
{
	const char	*last_occurence;
	last_occurence = 0;

	while (*src)
	{
		if (*src == c)
			last_occurence = src;
		src++;
	}

	return ((char *)last_occurence);
}
