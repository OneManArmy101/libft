/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:39:32 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 16:39:34 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (res);
}

/*
int main(void) {
    char dest[20] = "Hola ";
    const char src[] = "mundo!";
    size_t size = 20;

    size_t result = ft_strlcat(dest, src, size);

    printf("Cadena concatenada: %s\n", dest);
    printf("Longitud total de la cadena resultante: %zu\n", result);

    return 0;
}
*/
