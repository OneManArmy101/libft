/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:44:20 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 16:44:45 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr_new;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	ptr_new = malloc(i + 1);
	if (!ptr_new)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr_new[i] = str[i];
		i++;
	}
	ptr_new[i] = '\0';
	return (ptr_new);
}

/*
int main(void)
{
    printf("%s", ft_strdup("Bye"));
    return 0;
}
*/
