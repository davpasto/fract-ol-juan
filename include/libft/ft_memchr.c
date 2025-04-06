/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:00:45 by davpasto          #+#    #+#             */
/*   Updated: 2023/04/20 16:45:49 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = s;
	const unsigned char	uc = (unsigned char) c;

	while (n--)
	{
		if (*p == uc)
			return ((void *) p);
		p++;
	}
	return (0);
}
