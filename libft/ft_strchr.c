/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:41:38 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 16:42:10 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Hacemos cast a (char) para asegurarnos que el valor de c esté entre 0 y 255
char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	return (NULL);
}
/*
int	main()
{
	char	str[] = "Hola llevo más de 12 horas programando";
	printf("%s", ft_strchr(str, 'm'));
}
*/