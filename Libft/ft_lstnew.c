/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:29:48 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:40:10 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
/*
#include <stdio.h>
int main(void)
{
	t_list *node;
	t_list *node1;
		
	node = ft_lstnew("Alessia");
	printf("%s\n", (char *)node->content);
	node1 = ft_lstnew("");
	printf("%s\n", (char *)node1->content);
	return (0);
}*/
