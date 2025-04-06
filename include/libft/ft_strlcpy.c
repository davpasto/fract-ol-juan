/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:59:26 by davpasto          #+#    #+#             */
/*   Updated: 2023/04/23 21:01:37 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (src != NULL && dst != NULL && size != 0)
	{
		i = 0;
		while ((i < size - 1) && (i < len))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*int main(void)
{
    char dst[20];
    const char *src2 = "Hola mundo!";

    printf("Prueba de la segunda implementación (con bucle while):\n");
    printf("Cadena original: %s\n", src2);
    printf("Tamaño de la cadena original: %ld\n", ft_strlen(src2));
    size_t result2 = ft_strlcpy(dst, src2, 10);
    printf("Cadena copiada: %s\n", dst);
    printf("Tamaño de la cadena copiada: %ld\n", result2);
    printf("\n");
	return (0);
}*/
