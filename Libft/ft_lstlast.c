/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:00:09 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 12:20:23 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *lst;
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *last_node;
	printf("Aqui llegue\n");

	lst = NULL;
	n1 = ft_lstnew("Alessia");
	n2 = ft_lstnew("Fernando");
	n3 = ft_lstnew("Rosy");
	lst = n1;
	ft_lstadd_front(&lst, n2);
	ft_lstadd_front(&lst, n3);
	printf("I'm here!\n");
	last_node = ft_lstlast(lst);
	printf("%s\n", (char *)last_node->content);
	return (0);
}*/
