/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:15:55 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 17:17:41 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*ptr;

	if (num_elements == SIZE_MAX || element_size == SIZE_MAX)
		return (0);
	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}


int	main(void)
{
	int *arr = (int *) ft_calloc(5, sizeof(int));
	if (arr != NULL)
		free(arr);
	return 0;
}

