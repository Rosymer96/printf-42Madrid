/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:16:21 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:26:09 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*str;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	if (total / nmemb != size)
		return (NULL);
	str = malloc(total);
	if (!str)
		return (NULL);
	ft_bzero(str, total);
	return (str);
}
