/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:31:03 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 14:53:26 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;
	size_t				i;

	src1 = (const unsigned char *)s1;
	src2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[] = "Hola\0Fernando";
    char s2[] = "Hola\0Alessia";
    
    printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 10));
    printf("memcmp: %d\n\n", memcmp(s1, s2, 10));

    printf("ft_memcmp (n=4): %d\n", ft_memcmp("abcde", "abczz", 4)); 
    printf("memcmp (n=4): %d\n\n", memcmp("abcde", "abczz", 4));

    printf("ft_memcmp: %d\n", ft_memcmp("Hola", "Adios", 0));
    printf("memcmp : %d\n", memcmp("Hola", "Adios", 0));

    return (0);
}*/