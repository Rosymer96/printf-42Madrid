#include "ft_printf.h"

int    ft_printf_utils(char format, va_list args)
{
    if(format == 'c')
        return(ft_printf_char(va_arg(args, int)));
    if(format == 's')
        return(ft_printf_str(va_arg(args, char *)));
    if(format == 'p')
        return(ft_printf_ptr(va_arg(args, unsigned long long)));
    if(format == 'd' || format == 'i')
        return(ft_printf_int(va_arg(args, int)));
    if (format == 'x')
        return(ft_printf_hexa(va_arg(args, unsigned int), "0123456789abcdef"));
    if (format == 'X')
        return(ft_printf_hexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
    else if(format == '%')
    {
        return(ft_printf_char('%'));
    }
    else
        return(ft_printf_char(format));
    }            