/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:47:50 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/25 22:47:41 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*update_str(int sz_s1, int sz_s2, char const *s1, char const *s2)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = malloc (sz_s1 + sz_s2 + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < sz_s1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < sz_s1 + sz_s2)
	{
		new_str[i] = s2[i - sz_s1];
		i++;
	}
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;	
	int		size_s1;
	int		size_s2;
	char	*new_str;

	i = 0;
	size_s1 = 0;
	size_s2 = 0;
	while (s1[size_s1] != '\0')
		size_s1++;
	while (s2[size_s2] != '\0')
		size_s2++;
	new_str = update_str(size_s1, size_s2, s1, s2);
	if (new_str == NULL)
		return (NULL);
	new_str[size_s1 + size_s2] = '\0';
	return (new_str);
}

/*
int main(void)
{
	printf("%s", ft_strjoin("Never", " Surrender"));
	return (0);
}
*/
