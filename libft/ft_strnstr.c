/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:22:25 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/23 17:22:30 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (i < len && str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j]
			&& to_find[j] && (i + j < len))
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
		j = 0;
	}
	return (NULL);
}

/*
int	main()
{
	char	str[] = "Hola llevo más de 12 horas programando";
	char	find[] = "llevo";
	printf("%s\n", strnstr(str, find, ft_strlen(str)));
	printf("%s", ft_strnstr(str, find, ft_strlen(str)));
}
*/