/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:18:45 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:42:42 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && needle[j] == haystack[i + j] && needle[j] && haystack[i + j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *haystack = "Alessia";
    char *needle = "essi";

    printf("ft_strnstr [%s]\n", ft_strnstr(haystack, needle, 10));
    printf("strnstr [%s]\n\n", strnstr(haystack, needle, 10));

	printf("ft_strnstr [%s]\n", ft_strnstr(haystack, needle, 5));
    printf("strnstr [%s]\n\n", strnstr(haystack, needle, 5));

	printf("ft_strnstr [%s]\n", ft_strnstr("Hola Alessia", "Hola", 4));
    printf("strnstr [%s]\n\n", strnstr("Hola Alessia", "Hola", 4));

	printf("ft_strnstr [%s]\n", ft_strnstr("Hola Alessia", "", 10));
    printf("strnstr [%s]\n\n", strnstr("Hola Alessia", "", 10));

	printf("ft_strnstr [%s]\n", ft_strnstr("", "Hola", 10));
    printf("strnstr [%s]\n\n", strnstr("", "Hola", 10));

	printf("ft_strnstr [%s]\n", ft_strnstr("Hola Alessia", "Hola", 1000));
    printf("strnstr [%s]\n\n", strnstr("Hola Alessia", "Hola", 1000));
    return (0);
}*/
