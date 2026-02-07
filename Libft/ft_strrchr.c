/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:17:12 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 16:00:18 by rosvela          ###   ########.fr       */
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
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*str = "Alessia Xiuling";
	char		*result;
	char		*result_ori;

	result = ft_strrchr(str, 'i');
	printf("ft_strrchr:  [%s] (Dir: %p)\n", result, result);

	result = ft_strrchr(str, 'Z');
	printf("ft_strrchr:  [%s]\n", result);

	result = ft_strrchr(str, '\0');
	printf("ft_strrchr:  (Dir: %p)\n", result);

	result = ft_strrchr(str, 1024);
	result_ori= strrchr(str, 1024);

	printf("ft_strrchr:       %p\n", result);
	printf("strrchr:   %p\n", result_ori);

	printf("NULL: [%s]\n", strrchr(NULL, 'a'));

	return (0);
}*/
