/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:40:48 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/16 12:50:38 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	d = dst;
	s = src;

	if (d == s || n == 0)
		return (dest);
	if (d < s || d >= s + n)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += (n - 1);
		s += (n - 1);
		while (n--)
			*(d--) = *(s--);
	}
	return (dst);
}