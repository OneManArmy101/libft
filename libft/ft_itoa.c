/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:47:07 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 17:47:49 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	reverse_string(char *str, int start, int end)
{
	char	temp;

	while (start < end)
	{
		temp = str[start];
		str[start++] = str[end];
		str[end--] = temp;
	}
}

static char	*convert_to_string(long int n, int count)
{
	int		is_negative;
	int		index;
	char	*result;

	is_negative = 0;
	if (n < 0 && ++is_negative)
		n = -n;
	result = (char *)malloc(count + is_negative + 1);
	if (result == NULL)
		return (NULL);
	index = 0;
	if (is_negative)
		result[index++] = '-';
	while (count-- > 0)
	{
		result[index++] = (n % 10) + '0';
		n /= 10;
	}
	result[index] = '\0';
	reverse_string(result, is_negative, index - 1);
	return (result);
}

char	*ft_itoa(int n)
{
	int	count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = count_digits(n);
	return (convert_to_string(n, count));
}

/*
int	main() {
    int number = -2147483648;
    char *str = ft_itoa(number);
    if (str == NULL) {
        printf("Error: No se pudo convertir el número a cadena.\n");
        return 1;
    }
    printf("Número convertido a cadena: %s\n", str);
    free(str);
    return (0);
}
*/