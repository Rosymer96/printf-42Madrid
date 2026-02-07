#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "./libft/libft.h"

int     ft_printf(const char *format, ...);
int    ft_printf_utils(char format, va_list args);
int     ft_printf_char(int c);






#endif