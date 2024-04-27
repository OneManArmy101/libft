/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:11:26 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 18:11:27 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    void *result = ft_memchr(nums, 2, sizeof(nums));
    printf("Byte encontrado en la posición %ld\n",
   	((unsigned char *)result - (unsigned char *)nums)
	 / sizeof(int));
    
    return 0;
}
*/
