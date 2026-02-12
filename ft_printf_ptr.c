/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:51:07 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/12 10:51:08 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr)
{
	unsigned long long	ad;
	int					count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	ad = (unsigned long long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_printf_base(ad, "0123456789abcdef", 16);
	return (count);
}
