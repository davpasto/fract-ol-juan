/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:33:34 by davpasto          #+#    #+#             */
/*   Updated: 2023/04/20 16:58:15 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*char_b;

	i = 0;
	char_b = (char *)b;
	while (i < len)
	{
		char_b[i] = c;
		i++;
	}
	return (b);
}
