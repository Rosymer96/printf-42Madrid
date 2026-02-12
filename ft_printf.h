/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:38:02 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/12 10:38:04 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printf_char(int c);
int	ft_printf_str(char *str);
int	ft_putnbr(long n);
int	ft_printf_int(int n);
int	ft_printf_base(unsigned long long n, char *base, unsigned int len);
int	ft_printf_ptr(void *ptr);

#endif
