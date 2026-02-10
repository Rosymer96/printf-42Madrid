#include "ft_printf.h"

static int  ft_printf_utils(char format, va_list args)
{
    if(format == 'c')
        return(ft_printf_char(va_arg(args, int)));
    if(format == 's')
        return(ft_printf_str(va_arg(args, char *)));
    if(format == 'p')
        return(ft_printf_ptr(va_arg(args, unsigned long long)));
    if(format == 'd' || format == 'i')
        return(ft_printf_int(va_arg(args, int)));
    if(format == 'u')
        return(ft_printf_base(va_arg(args, unsigned int), "0123456789", 10));
    if (format == 'x')
        return(ft_printf_base(va_arg(args, unsigned int), "0123456789abcdef", 16));
    if (format == 'X')
        return(ft_printf_base(va_arg(args, unsigned int), "0123456789ABCDEF", 16));
    if (format == '%')
        return(ft_printf_char('%'));
    return (0);
}   

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;
    int res;

    if (!format)
        return (-1);
    va_start(args, format);
    i = 0;
    count = 0;
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1] 
            && ft_strchr("cspdiuxX%", format[i + 1]))
            res = ft_printf_utils(format[++i], args);
        else
            res = ft_printf_char(format[i]);
        if (res == -1)
            return(va_end(args), -1);
        count += res;
		i++;
    }
    return(va_end(args), count);
}