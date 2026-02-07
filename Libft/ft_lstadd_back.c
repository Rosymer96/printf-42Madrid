/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:21:00 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:34:14 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
#include <stdio.h>
int main(void)
{
	t_list *lst = NULL;
	t_list *n0;
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *n4;
	t_list *last;

	n0 = ft_lstnew("Hola");
	ft_lstadd_back(&lst, n0);
	printf("%s\n", (char *)lst->content);
	n1 = ft_lstnew("Alessia");
	lst = n1;
	n2 = ft_lstnew("Fernando");
	ft_lstadd_front(&lst, n2);
	n3 = ft_lstnew("Rosy");
	ft_lstadd_back(&lst, n3);
	last = ft_lstlast(lst);
	printf("%s\n", (char *)last->content);
	n4 = ft_lstnew("Angelica");
	ft_lstadd_back(&lst, n4);
	last = ft_lstlast(lst);
	printf("%s\n", (char *)last->content);
	
	return (0);
}*/
