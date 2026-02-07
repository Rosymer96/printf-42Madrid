/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:22:09 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:43:39 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	
	dest_len = 0;
	src_len = ft_strlen(src);
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	i = 0;
	while (dest_len + i < size - 1 && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char    d[15] = "Hola";
    char    s[] = " Mundo";
    size_t  res;
	char    d1[15] = "Hola";
    char    s1[] = " Mundo";
    size_t  res1;

    
    res = ft_strlcat(d, s, 15);
    printf("ft_strlcat: [%s], Return: %zu\n", d, res);
	res1 = strlcat(d1, s1, 15);
    printf("strlcat: [%s], Return: %zu\n", d1, res1);

   
    char    d2[15] = "Hola";
	char    d3[15] = "Hola";
    res = ft_strlcat(d2, s, 2);
	res1 = strlcat(d3, s1, 2);

    printf("ft_strlcat: [%s], Return: %zu\n", d2, res);
	printf("strlcat: [%s], Return: %zu\n", d3, res1);
    
    return (0);
}*/
