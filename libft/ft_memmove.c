/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:26:03 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 17:28:07 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	dest_ptr = dest;
	src_ptr = src;
	i = 0;
	if (dest_ptr < src_ptr)
		ft_memcpy(dest, src, n);
	else if (dest_ptr > src_ptr)
	{
		i = n;
		while (i > 0)
		{
			dest_ptr[i - 1] = src_ptr[i - 1];
			i--;
		}
	}
	return (dest);
}

/*
int main(void)
{
    const char *txt_src = "Hola";
    char txt_dest[5];
    ft_memmove(txt_dest, txt_src, 4);
    printf("Contenido después de ft_memmove: %s\n", txt_dest);
    printf("Contenido de origen: %s\n", txt_src);
    return 0;
}
*/
