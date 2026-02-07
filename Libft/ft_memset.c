/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:08:23 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 12:47:22 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*p;

	i = 0;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[20] = "Alessia Xiuling";
	char str2[20] = "Alessia Xiuling";
	char str3[20] = "Alessia Xiuling";
	int c = 'A';
	size_t n = 5;

	ft_memset(str1, c, n);
	memset(str2, c, n);
	printf("ft_memset: [%s]\n", str1);
    printf("menset : [%s]\n", str2);
	printf("return_value : [%s]\n", (char *)ft_memset(str3, c, n));

	ft_memset(str1, 257, n);
	memset(str2, 257, n);
	printf("ft_memset: [%s]\n", str1);
    printf("menset : [%s]\n", str2);

	ft_memset(str1, 257, n);
	memset(str2, 257, n);
	printf("ft_memset: [%s]\n", str1);
    printf("menset : [%s]\n", str2);

	ft_memset(str1, -1, n);
	memset(str2, -1, n);
	printf("ft_memset: [%s]\n", str1);
    printf("menset : [%s]\n", str2);

	char empty[10] = "Empty";
	char empty2[10] = "Empty";
	ft_memset(empty, 'X', 0);
	memset(empty2, 'X', 0);
	printf("%s\n", empty2);

	ft_memset(NULL, 'X', 5);
	memset(NULL, 'X', 5);

	return (0);
}*/