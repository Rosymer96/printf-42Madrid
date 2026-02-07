/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:21:24 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:43:06 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s1 = "Alessia";
    char *s2 = "Alexander";

    printf("ft_strncmp: [%d]\n", ft_strncmp(s1, s2, 3)); 
	printf("strncmp: [%d]\n", strncmp(s1, s2, 3)); 


    printf("ft_strncmp: [%d]\n", ft_strncmp(s1, s2, 5));
	printf("strncmp: [%d]\n", strncmp(s1, s2, 5));

	printf("ft_strncmp: [%d]\n", ft_strncmp(s1, s2, 5));
	printf("strncmp: [%d]\n", strncmp(s1, s2, 5));

	char s3[] = {169, 0};
	char s4[] = {65, 0};

	printf("ft_strncmp: [%d]\n", ft_strncmp(s3, s4, 1));
	printf("strncmp: [%d]\n", strncmp(s3, s4, 1));
    return (0);
}*/