/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:29:41 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 16:03:43 by rosvela          ###   ########.fr       */
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
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*str = "Alessia Xiuling";
	char		*result;
	char		*result_ori;

	result = ft_strchr(str, 'i');
	printf("ft_strchr:  [%s] (Dir: %p)\n", result, result);

	result = ft_strchr(str, 'Z');
	printf("ft_strchr:  [%s]\n", result);

	result = ft_strchr(str, '\0');
	printf("ft_strchr:  (Dir: %p)\n", result);

	result = ft_strchr(str, 1024);
	result_ori= strchr(str, 1024);

	printf("ft_strchr:       %p\n", result);
	printf("strchr:   %p\n", result_ori);

	printf("NULL: [%s]\n", strchr(NULL, 'a'));

	return (0);
}*/