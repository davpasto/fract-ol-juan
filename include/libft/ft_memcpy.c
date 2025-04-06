/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:24:40 by davpasto          #+#    #+#             */
/*   Updated: 2023/04/23 20:32:21 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_2;
	unsigned char	*src_2;

	dst_2 = (unsigned char *)dst;
	src_2 = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (n--)
		dst_2[n] = src_2[n];
	return (dst);
}
