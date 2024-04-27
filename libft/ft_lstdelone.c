/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:44:46 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/22 17:44:47 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		(*del)(lst->content);
		free(lst);
	}
}

/*
void	free_memory(void* content)
{
	if (content)
	{
		free(content);
	}
}

int main(void)
{
	t_list *lst;
	char * name = "First";

	lst = malloc(sizeof(t_list));
	if(!lst)
		return 1;

	lst-> content = name;

	printf("Contenido antes de eliminar: %s\n", (char *)(lst->content));
	ft_lstdelone(lst, free_memory);
	lst = NULL;
	if (lst != NULL) {
        printf("La memoria no ha sido liberada correctamente.\n");
    } else {
        printf("La memoria ha sido liberada correctamente.\n");
    }
	return (0);
}
*/
