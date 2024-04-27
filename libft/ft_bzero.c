/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:19:56 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 17:21:18 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int main(void)
{
    int nums[7];
    int i = 0;
    ft_bzero(nums, sizeof(nums));
	// Podemos usar un sizeof (o su equivalente, ya que no suele estar
    // autorizado) para poner el tercer parámetro (el nº de bytes)
    
    while (i < sizeof(nums) / sizeof(nums[0]))
    {
        printf("%d ", nums[i]);
        i++;
    }
    return 0;
}
*/