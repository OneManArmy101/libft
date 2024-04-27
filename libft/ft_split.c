/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:01:13 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/25 22:33:16 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//El safety check es solamente para evitar que añada un \n de más
//o gestione cuando no hay más de 1 str
static int	count_strs(char const *s, char c)
{
	int	str_counter;
	int	safety_check;

	str_counter = 0;
	safety_check = 0;
	while (*s)
	{
		if (*s == c)
			safety_check = 0;
		else if (safety_check == 0)
		{
			safety_check = 1;
			str_counter++;
		}
		s++;
	}
	return (str_counter);
}

static int	substr_length(char const *s2, char c, int start_i)
{
	int	lenght;

	lenght = 0;
	while (s2[start_i] != c && s2[start_i] != '\0')
	{
		lenght++;
		start_i++;
	}
	return (lenght);
}

static int	free_mem(char **sub_txts, int j)
{
	int	return_val;
	int	i;

	return_val = 0;
	if (sub_txts[j] == NULL)
	{
		return_val = 1;
		i = 0;
		while (i < j)
		{
			free(sub_txts[i]);
			i++;
		}
		free(sub_txts);
	}
	return (return_val);
}

static char	**check_n_copy(char const *s, char c, char **sub_txts, int str_cnt)
{
	int	i;
	int	j;
	int	str_index;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < str_cnt)
	{
		str_index = 0;
		while (s[i] == c)
			i++;
		sub_txts[j] = (char *)malloc(sizeof(char) * substr_length(s, c, i) + 1);
		if (free_mem(sub_txts, j) == 1)
			return (NULL);
		while (s[i] != '\0' && s[i] != c)
			sub_txts[j][str_index++] = s[i++];
		sub_txts[j][str_index] = '\0';
		j++;
	}
	sub_txts[j] = 0;
	return (sub_txts);
}

char	**ft_split(char const *s, char c)
{
	int		str_count;
	char	**sub_txts;

	str_count = count_strs(s, c);
	sub_txts = malloc(sizeof(char *) * (str_count + 1));
	if (sub_txts == NULL)
		return (NULL);
	sub_txts = check_n_copy(s, c, sub_txts, str_count);
	return (sub_txts);
}

/*
int main()
{
    char **ptr_str = ft_split("Im.possible", '.');
    if (ptr_str == NULL)
    {
        printf("Error: No se pudo dividir la cadena.\n");
        return (1);
    }
    int i = 0;

    while (ptr_str[i] != NULL)
    {
        printf("%s\n", ptr_str[i]);
        free(ptr_str[i]);
        i++;
    }
    free(ptr_str);

    return (0);
}
*/