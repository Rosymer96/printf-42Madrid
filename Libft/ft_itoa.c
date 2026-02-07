/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:26:33 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:31:49 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_length(long num)
{
	size_t	len;

	len = (num <= 0);
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	n_len;
	char	*n_str;
	long	num;

	num = n;
	n_len = get_length(num);
	n_str = malloc(sizeof(char) * (n_len +1));
	if (!n_str)
		return (NULL);
	n_str[n_len] = '\0';
	if(num == 0)
		n_str[0] = '0';
	if (num < 0)
	{
		n_str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		n_str[--n_len] = (num % 10) + '0';
		num /= 10;
	}
	return (n_str);
}
