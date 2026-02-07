/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:17:26 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:37:53 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (n == 0)
		return (src_len);
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char    dest[8];
    char    *src = "Alessia";
    size_t  res;
	char    dest1[8];
    char    *src1 = "Alessia";
    size_t  res1;

    printf("ft_strlcpy: %zu\n", ft_strlcpy(dest, src, 0));
	 printf("strlcpy: %zu\n", strlcpy(dest1, src1, 0));

    res = ft_strlcpy(dest, src, 3);
    printf("ft_strlcpy dest=[%s], ret=%zu\n", dest, res);
	res1 = strlcpy(dest1, src1, 3);
    printf("strlcpy dest=[%s], ret=%zu\n", dest1, res1);

    res = ft_strlcpy(dest, "Hola", 8);
    printf("ft_strlcpy dest=[%s], ret=%zu\n", dest, res);
	res1 = strlcpy(dest1, "Hola", 8);
    printf("strlcpy dest=[%s], ret=%zu\n", dest1, res1);

    return (0);
}*/
