/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:24:12 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/23 17:24:17 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Al igual que en strchr, hacemos cast a (char) para asegurarnos
//que el valor de c esté entre 0 y 255
char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if ((char)c == '\0')
		return ((char *)str + i);
	while (i > 0)
	{
		i--;
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
	}
	return (NULL);
}

/*
int	main()
{
	char	str[] = "Hola llevo más de 12 horas programando";
	printf("%s\n", strrchr(str, '\0'));
	printf("%s", ft_strrchr(str, '\0'));
}
*/