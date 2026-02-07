#include "ft_printf.h"

int    ft_printf_utils(char format, va_list *args)
{
    if(format == 'c')
        return(ft_printf_char(va_arg(args, int)));
    else if(format == '%')
    {
        return(ft_printf_char('%'));
    }
    else
        return(ft_printf_char(format));
    }            