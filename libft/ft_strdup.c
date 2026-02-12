/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:08:49 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/05 12:30:06 by rosvela          ###   ########.fr       */
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
