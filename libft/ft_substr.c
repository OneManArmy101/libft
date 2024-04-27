/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:01:33 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 18:02:49 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*new_str;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new_str = (char *)malloc(len + 1);
	if (!new_str || !s)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		new_str[i] = s[start + i];
		i++;
		len--;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
int main (void)
{
	printf("%s", ft_substr("Never", 5, 4));
	
	return (0);
}
*/
