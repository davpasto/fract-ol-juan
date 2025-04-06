/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:39:38 by davpasto          #+#    #+#             */
/*   Updated: 2023/04/23 22:06:43 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	new_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_str, s2, ft_strlen(s2) + ft_strlen(new_str) + 1);
	return (new_str);
}

/*int main(void)
{
	char *str1 = ft_strdup("Hola ujfu");
	char *str2 = ft_strdup(" pablgegetgo");

	printf("%s\n", ft_strjoin(str1, str2));
	return 0;
}*/
