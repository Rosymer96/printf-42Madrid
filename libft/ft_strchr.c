/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:29:41 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/05 12:31:09 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (src[i])
	{
		if (src[i] == ch)
			return ((char *)&src[i]);
		i++;
	}
	if (src[i] == ch)
		return ((char *)&src[i]);
	return (NULL);
}
