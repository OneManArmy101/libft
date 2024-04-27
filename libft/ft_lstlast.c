/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:07:59 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 17:08:01 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int main()
{
	t_list *lst3 = malloc(sizeof(t_list));
	lst3->content = "SUCCEED";
	lst3->next = NULL;
	
	t_list *lst2 = malloc(sizeof(t_list));
	lst2->content = "RESIST";
	lst2->next = lst3;

	t_list *lst1 = malloc(sizeof(t_list));
	lst1->content = "SURRENDER";
	lst1->next = lst2;

	t_list *last_node = ft_lstlast(lst1);

	if (last_node != NULL) {
        printf("El último nodo es: %s\n", (char*)last_node->content);
    } else {
        printf("La lista está vacía.\n");
    }

	free(lst1);
    free(lst2);
    free(lst3);
	return (0);
}
*/
