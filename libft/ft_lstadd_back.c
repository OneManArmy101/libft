/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:45:16 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 17:46:27 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			temp = *lst;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new;
		}
	}
}

/*
int main()
{
	t_list *my_list = malloc(sizeof(t_list));
	my_list-> content = "FAIL";
	my_list-> next = NULL;

	t_list *new = malloc(sizeof(t_list));
	new -> content =  "TO SURRENDER";
	new -> next = NULL;

	ft_lstadd_back(&my_list, new);

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
