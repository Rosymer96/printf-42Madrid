/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:22:54 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:44:36 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	size_t			i;
	unsigned char	*d;
	const unsigned char	*s;
	
	if(!dest && !str)
		return (NULL);

	d = (unsigned char *)dest;
	s = (const unsigned char *)str;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "Alessia Xiuling";
	char dest[20];
	char src1[] = "Alessia Xiuling";
	char dest1[20];
	printf("ft_memcpy: [%s]\n", (char *)ft_memcpy(dest, src, 16));
	printf("memcpy: [%s]\n", (char *)memcpy(dest, src, 16));

	int nums[3] =  {100, 200, 300};
	int dest_nums[3];
	int nums1[3] =  {100, 200, 300};
	int dest_nums1[3];
	ft_memcpy(dest_nums, nums, sizeof(int) * 3);
	memcpy(dest_nums1, nums1, sizeof(int) * 3);
	printf("nums: %d, %d, %d\n", dest_nums[0], dest_nums[1], dest_nums[2]);
	printf("nums1: %d, %d, %d\n", dest_nums1[0], dest_nums1[1], dest_nums1[2]);

	printf("[%s]\n", (char *)ft_memcpy(NULL, NULL, 5));
	printf("[%s]\n", (char *)memcpy(NULL, NULL, 5));
	return (0);
}*/