/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 09:15:58 by davpasto          #+#    #+#             */
/*   Updated: 2023/04/22 04:25:17 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = (char *) malloc(len);
	if (!s2)
		return (s2);
	ft_memcpy(s2,s1,len);
	s2[len] = '\0';
	return (s2);
}*/

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*s2;

	s1_len = ft_strlen(s1) + 1;
	s2 = (char *) malloc(s1_len);
	if (s2 != NULL)
	{
		ft_strlcpy(s2, s1, s1_len);
	}
	return (s2);
}
