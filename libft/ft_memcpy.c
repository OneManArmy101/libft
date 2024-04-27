/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:30:00 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 17:30:07 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst == src || n == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
int main(void)
{
    const char *txt_src = "Hola";
    char txt_dest[5];
    ft_memcpy(txt_dest, txt_src, 4);
    printf("Contenido después de ft_memcpy: %s\n", txt_dest);
    printf("Contenido de origen: %s\n", txt_src);
    return 0;
}
*/
