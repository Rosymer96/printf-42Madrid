/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:37:57 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 16:40:17 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *lst  = NULL;
	t_list *n1;
	t_list *n2;	
	t_list *n3;
	t_list *n4;
	
	lst = NULL;
	printf("%i\n", ft_lstsize(lst));
	n1 = ft_lstnew("Alessia");
	n2 = ft_lstnew("Fernando");
	n3 = ft_lstnew("Rosy");
	n4 = ft_lstnew("Angelica");
	lst = n1;
	printf("I am here\n");
	ft_lstadd_front(&lst, n2);
	ft_lstadd_front(&lst, n3);
	ft_lstadd_front(&lst, n4);
	printf("%i\n", ft_lstsize(lst));
	return (0);
}*/
