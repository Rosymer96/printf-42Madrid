#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "./libft/libft.h"

int     ft_printf(const char *format, ...);
int     ft_printf_char(int c);
int     ft_printf_str(char *str);
int     ft_putnbr(long n);
int     ft_printf_int(int n);
int     ft_printf_base(unsigned long long n, char *base, unsigned int len);
int     ft_printf_ptr(unsigned long long ptr);

#endif