/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:21:10 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/23 17:21:12 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (i < n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else
		return (0);
}
/*
int main(void)
{
	size_t val;
	char ch1[] = { "Yous"};
	char ch2[] = { "You"};

	val = ft_strncmp(ch1, ch2, 4);
	return (0);
}
*/