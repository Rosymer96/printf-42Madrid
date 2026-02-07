/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:16:21 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:26:09 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*str;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	if (total / nmemb != size)
		return (NULL);
	str = malloc(total);
	if (!str)
		return (NULL);
	ft_bzero(str, total);
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	size_t	count = 5;
	size_t	size = sizeof(int);
	int		*arr;
	int		*arr1;
	size_t	i;

	arr = (int *)ft_calloc(count, size);
	arr1 = (int *)calloc(count, size);

	for (i = 0; i < count; i++)
	{
		printf("idx [%zu]: %d\n", i, arr[i]);
	}
	free(arr);
	for (i = 0; i < count; i++)
	{
		printf("idx [%zu]: %d\n", i, arr1[i]);
	}
	free(arr1);
	printf("\n");
	void *p1 = ft_calloc(0, 10);
	void *p2 = calloc(0, 10);
	
	printf("ft_calloc(0, 10): %p\n", p1);
	printf("   calloc(0, 10): %p\n", p2);
	
	free(p1);
	free(p2);
	printf("\n");
	void *p3 = ft_calloc(1024, (size_t)-1 / 2);
	void *p4 = calloc(1024, (size_t)-1 / 2);
	
	printf("ft_calloc(1024, (size_t)-1 / 2): %p\n", p3);
	printf("   calloc(1024, (size_t)-1 / 2): %p\n", p4);
	return (0);
}*/
