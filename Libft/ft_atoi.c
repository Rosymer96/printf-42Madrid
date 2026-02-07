/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:31:36 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 13:03:25 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	n;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = *str - '0';
		res = res * 10 + n;
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("1a. ft_atoi: [%d]\n", ft_atoi("42"));
    printf("1b.    atoi: [%d]\n\n", atoi("42"));

    printf("2a. ft_atoi: [%d]\n", ft_atoi("   -12345"));
    printf("2b.    atoi: [%d]\n\n", atoi("   -12345"));

    printf("3a. ft_atoi: [%d]\n", ft_atoi("\t\n\r  +42lyon"));
    printf("3b.    atoi: [%d]\n\n", atoi("\t\n\r  +42lyon"));

    printf("4a. ft_atoi: [%d]\n", ft_atoi("+-42"));
    printf("4b.    atoi: [%d]\n\n", atoi("+-42"));

    printf("5a. ft_atoi: [%d]\n", ft_atoi("2147483647"));
    printf("5b.    atoi: [%d]\n\n", atoi("2147483647"));

    return (0);
}*/
