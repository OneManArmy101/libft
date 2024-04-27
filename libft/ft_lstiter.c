/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:49:26 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 17:49:28 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr_list;
	t_list	*next;

	curr_list = lst;
	while (curr_list != NULL)
	{
		next = curr_list->next;
		(*f)(curr_list->content);
		curr_list = next;
	}
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
	t_list *lst3;
	t_list *lst2;
	t_list *lst1;

	lst3 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst1 = malloc(sizeof(t_list));

	lst3->content = ft_strdup("!");
	lst3->next = NULL;

	lst2->content = ft_strdup("SURRENDER");
	lst2->next = lst3;

	lst1->content = ft_strdup("NEVER");
	lst1->next = lst2;

	ft_lstiter(lst1, free_memory);

	free(lst1);
	free(lst2);

	return (0);
}
*/
