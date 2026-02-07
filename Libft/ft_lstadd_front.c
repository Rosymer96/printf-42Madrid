/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:09:49 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:33:36 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	lst = NULL;

	n1 = ft_lstnew("Alessia");
	n2 = ft_lstnew("Fernando");
	n3 = ft_lstnew("Rosy");

	lst = n1;
	printf("%s\n", (char *)lst->content);
	printf("node added\n");
	ft_lstadd_front(&lst, n2);
	printf("%s\n", (char *)lst->content);
	printf("node added\n");
	ft_lstadd_front(&lst, n3);
	printf("%s\n", (char *)lst->content);
	return (0);
}*/
