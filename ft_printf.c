#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;

    if (!format)
        return (-1);
    va_start(args, format);
    i = 0;
    count = 0;

    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            if(ft_strchr("cspdiuxX%", format[i + 1]))
            {
                count += ft_printf_utils(format[i + 1], args);
                i += 2;
            }
            else
            {
                count += ft_printf_char(format[i]);
                i++;
            }
        }
        else
        {
            count += ft_printf_char(format[i]);
            i++;
        }
    }
    va_end(args);
    return(count);
}