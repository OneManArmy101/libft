/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:45:53 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 16:46:41 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void print_target(unsigned int index, char *path)
{
    printf("Index is: %u, path is: %s\n", index, path);
}

int main(void)
{
    char * str = "Hola";
    ft_striteri(str, print_target);
    printf("%s", str);
    return 0;
}
*/