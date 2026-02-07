/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:05:28 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:36:18 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
/*
void f(void *content)
{
	char *str;
	int i;
	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

#include <stdio.h>
int main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *tmp;

	n1 = ft_lstnew(ft_strdup("Alessia"));
	n2 = ft_lstnew(ft_strdup("Fernando"));
	n3 = ft_lstnew(ft_strdup("Rosy"));
	ft_lstadd_front(&n1, n2);
	ft_lstadd_front(&n1, n3);
	tmp = n1;
	ft_lstiter(n1, f);
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
}*/
