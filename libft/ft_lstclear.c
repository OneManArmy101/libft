/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:43:34 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 17:44:27 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*curr_lst;

	if (lst == NULL || *lst == NULL)
		return ;
	curr_lst = *lst;
	while (curr_lst != NULL)
	{
		next = curr_lst->next;
		del(curr_lst->content);
		free(curr_lst);
		curr_lst = next;
	}
	*lst = NULL;
}
/*
void free_memory(void* content)
{
	if(content)
	{
		free(content);
	}
}

int main(void)
{
	t_list *lst3 = malloc(sizeof(t_list));
	lst3 -> content =  ft_strdup("SURRENDER");
	lst3 -> next = NULL;

	t_list *lst2 = malloc(sizeof(t_list));
	lst2 -> content =  ft_strdup("TO");
	lst2 -> next = lst3;
	
	t_list *lst1 = malloc(sizeof(t_list));
	lst1-> content = ft_strdup("FAIL");
	lst1-> next = lst2;

	ft_lstclear(&lst1, free_memory);

	if (lst1 == NULL) {
        printf("La memoria ha sido liberada correctamente.\n");
    } else {
        printf("ERROR: No se liberó correctamente la memoria.\n");
    }

	return (0);
}
*/
