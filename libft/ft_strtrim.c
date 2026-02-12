/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:58:58 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/05 12:30:34 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static size_t	get_end(size_t start, char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dup;
	size_t	dup_len;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(start, s1, set);
	dup_len = end - start;
	dup = (char *)malloc(sizeof(char) * dup_len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < dup_len)
	{
		dup[i] = s1[start + i];
		i++;
	}
	dup[dup_len] = '\0';
	return (dup);
}
