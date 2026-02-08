#include "ft_printf.h"

int    ft_printf_utils(char format, va_list args)
{
    if(format == 'c')
        return(ft_printf_char(va_arg(args, int)));
    if(format == 's')
        return(ft_printf_str(va_arg(args, char *)));
    if(formatr == 'p')
        return(ft_printf_ptr(va_arg(args, unsigned long long ptr)));
    else if(format == '%')
    {
        return(ft_printf_char('%'));
    }
    else
        return(ft_printf_char(format));
    }            