/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:43:21 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 17:43:22 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int main(void)
{
	t_list *my_list = malloc(sizeof(t_list));
	my_list-> content = "SURRENDER";
	my_list-> next = NULL;

	t_list *new = malloc(sizeof(t_list));
	new -> content =  "NEVER";
	new -> next = NULL;

	ft_lstadd_front(&my_list, new);

	t_list *temp;
	while (my_list)
	{
        printf("%s\n", (char*)my_list->content);
        temp = my_list;
		my_list = my_list->next;
		free(temp);
    }
	return (0);
}
*/
