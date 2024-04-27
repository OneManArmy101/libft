/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:10:56 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/26 20:11:13 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	*add_prefix(void *content)
{
	char	*str = (char *)content;
	char	*new_str = malloc(strlen(str) + 8);
	if (!new_str)
		return (NULL);
	strcpy(new_str, "Remember: ");
	strcat(new_str, str);
	return (new_str);
}

void	free_memory(void *content)
{
	if (content)
		free(content);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

/*
int main(void)
{
	t_list *lst1 = ft_lstnew("NEVER");
	t_list *lst2 = ft_lstnew("SURRENDER");
	t_list *lst3 = ft_lstnew("!!");
	t_list *my_lst;
	t_list *temp;

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;

	my_lst = ft_lstmap(lst1, add_prefix, free_memory);
	temp = my_lst;
	while (temp)
	{
		printf("%s\n", (char *) temp->content);
		my_lst = temp->next;
		free(temp->content);
		free(temp);
		temp = my_lst;
	}

	return (0);
}
*/
