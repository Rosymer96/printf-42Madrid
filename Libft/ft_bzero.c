/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:23:48 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 12:59:53 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[20] = "Alessia Xiuling";
	char str2[20] = "Alessia Xiuling";
	size_t n = 5;

	ft_bzero(str1, n);
	bzero(str2, n);
	printf("ft_bzero: [%s]\n", str1);
    printf("bzero : [%s]\n", str2);

	printf("Resto: [%s]\n", str1 + n);
	printf("Resto: [%s]\n", str2 + n);

	int nums[5] = {1, 2, 3, 4, 5};
	ft_bzero(nums, sizeof(int) * 2);
	printf("nums[0]: %d, nums[1]: %d, nums[2]: %d, nums[3]: %d, nums[4]: %d\n", nums[0], nums[1], nums[2], nums[3], nums[4]);

	char word[5] = "Hola";
	ft_bzero(word, 0);
	printf("bzero : [%s]\n", word);

	return (0);
}*/