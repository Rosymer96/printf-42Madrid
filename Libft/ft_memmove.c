/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:17:44 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:39:51 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t n)
{
	size_t			i;
	unsigned char	*d;
	const unsigned char	*s;

	if (!dest && !str)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)str;
	if (d >= s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		ft_memcpy(dest, str, n);
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[10] = "aeiou";
	char s1a[10] = "aeiou";

	ft_memmove(s1 + 2, s1, 3);
	memmove(s1a + 2, s1a, 3);
	printf("%s\n", s1);
	printf("%s\n", s1a);

	char s2[10] = "12345";
	char s2a[10] = "12345";
	ft_memmove(s2, s2 + 2, 3);
	memmove(s2a, s2a + 2, 3);
	printf("%s\n", s2);
	printf("%s\n", s2a);

	char s[] = "Hola";
	char dest[10]="Rosy";
	char sa[] = "Hola";
	char desta[10] = "Rosy";
	ft_memmove(dest, s, 5);
	memmove(desta, sa, 5);
	printf("%s\n", dest);
	printf("%s\n", desta);

	int nums[5] = {10, 20, 30, 40, 50};
	ft_memmove(nums + 1, nums, sizeof(int) * 2);
	printf("nums: %d, %d, %d, %d, %d\n", nums[0], nums[1], nums[2], nums[3], nums[4]);

	char empty[] = "Dont touch me.";
	char str[] = "Unused";

	ft_memcpy(empty, str, 0);
	printf("%s\n", empty);

	char *res;
	char *res1;

	res = ft_memmove(NULL, NULL, 5);
	res1 = memmove(NULL, NULL, 5);
	printf("ft_memmove [%s]\n", res);
	printf("memmove [%s]\n", res1);
	return (0);
}*/