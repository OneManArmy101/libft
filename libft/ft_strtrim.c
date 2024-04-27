/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:44:25 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 16:32:43 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	j;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	i = 0;
	j = len;
	while (i <= len && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j >= i && ft_strchr(set, s1[j]) != NULL)
		j--;
	if (i > j)
		return (ft_strdup(""));
	len = j - i;
	return (ft_substr(s1, i, len + 1));
}
/*
int main(void)
{
    printf("%s\n", ft_strtrim("Impossible", "Im"));
    return 0;
}
*/