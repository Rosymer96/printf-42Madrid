/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:37:31 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/12 10:37:34 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_base(unsigned long long n, char *base, unsigned int len)
{
	int	count;

	count = 0;
	if (n >= len)
		count += ft_printf_base(n / len, base, len);
	count += ft_printf_char(base[n % len]);
	return (count);
}
