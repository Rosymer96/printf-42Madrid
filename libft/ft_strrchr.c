/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:17:12 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/05 12:30:19 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char	*tmp;
	size_t	i;
	char	ch;

	tmp = NULL;
	i = 0;
	ch = (char)c;
	while (src[i])
	{
		if (src[i] == ch)
			tmp = (char *)&src[i];
		i++;
	}
	if (src[i] == ch)
		return ((char *)&src[i]);
	return (tmp);
}
