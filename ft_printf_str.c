/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:38:18 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/12 10:38:19 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = (int)ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}
