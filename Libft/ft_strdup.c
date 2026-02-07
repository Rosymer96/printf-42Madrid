/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:08:49 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 16:02:03 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	src_len;
	char	*dup;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dup = malloc(sizeof(char) * (src_len + 1));
	if (!dup)
		return (NULL);
	while (i < src_len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char	*orig = "Hola Alessia Xiuling";
	char	*ft_dup;
	char	*dup;

	printf("Orig:  [%s] en %p\n\n", orig, (void*)orig);

	ft_dup = ft_strdup(orig);
	dup = strdup(orig);

	printf("(ft_dup): [%s] en %p\n", ft_dup, (void*)ft_dup);
	printf("(dup):         [%s] en %p\n", dup, (void*)dup);

	ft_dup[0] = 'Z';

	printf("orig:   [%s]\n", orig);
	printf("ft_dup: [%s](Z)\n", ft_dup);
	printf("dup:    [%s]\n", dup);

	free(ft_dup);
	free(dup);

	return (0);
}*/