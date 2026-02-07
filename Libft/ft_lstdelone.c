/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:55:06 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:38:43 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	free(content);
}


#include <stdio.h>
int main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *n4;
	t_list *tmp;
	t_list *tmp1;
	
	n1 = ft_lstnew(ft_strdup("Alessia"));
	n2 = ft_lstnew(ft_strdup("Fernando"));
	n3 = ft_lstnew(ft_strdup("Rosy"));
	n4 = ft_lstnew(ft_strdup("Angelica"));
	ft_lstadd_back(&n1, n2);
	ft_lstadd_back(&n1, n3);
	ft_lstadd_back(&n1, n4);
	tmp = n1;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstdelone(n4, del);
    ft_lstdelone(n3, del);
	printf("%s\n", (char *)n1->content);
	printf("%s\n", (char *)n2->content);
	return (0);
}*/
