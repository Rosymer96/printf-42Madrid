/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:14:53 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/05 11:00:25 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*s;
	unsigned char		ch;
	size_t				i;

	s = (const unsigned char *)src;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == ch)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
