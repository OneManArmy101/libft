/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:52:08 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/23 16:53:02 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
int	main()
{
	t_list *lst3 = malloc(sizeof(t_list));
	lst3->content = "SUCCEED";
	lst3->next = NULL;
	
	t_list *lst2 = malloc(sizeof(t_list));
	lst2->content = "WILL";
	lst2->next = lst3;

	t_list *lst1 = malloc(sizeof(t_list));
	lst1->content = "I";
	lst1->next = lst2;
	
	ft_lstsize(lst1);

	printf("El tamaño de la lista es: %d\n", ft_lstsize(lst1));

	free(lst1);
	free(lst2);
	free(lst3);
	return (0);
}
*/
