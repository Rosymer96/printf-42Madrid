/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:39:16 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:35:49 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
void del(void *content)
{
	free(content);
}
#include <stdio.h>
int main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list	*tmp;

	n1 = ft_lstnew(ft_strdup("Alessia"));
	n2 = ft_lstnew(ft_strdup("Rosy"));
	n3 = ft_lstnew(ft_strdup("Fernando"));
	ft_lstadd_back(&n1, n2);
	ft_lstadd_back(&n2, n3);
	tmp = n1;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&n1, del);
	while (n1 != NULL)
	{
		printf("%s\n", (char *)n1->content);
        n1 = n1->next;
	}
	printf("All clear.\n");
	return (0); 
}
*/
