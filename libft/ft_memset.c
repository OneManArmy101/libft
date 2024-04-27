/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:19:26 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 17:21:13 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// El void es como un comodín. De esta manera puede recibir chars,
// ints, chars*... Adaptación dinámica
void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int main(void)
{
    int nums[5];
    int i = 0;
    ft_memset(nums, 'A', sizeof(nums)); // Podemos usar un sizeof
	//(o su equivalente, ya que no suele estar
    // autorizado) para poner el tercer parámetro (el nº de bytes)
    
    while (i < sizeof(nums) / sizeof(nums[0]))
    {
        printf("%c ", nums[i]);
        i++;
    }
    return 0;
}
*/
