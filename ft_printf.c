#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;

    va_start(args, format);
    i = 0;
    count = 0;

    while (format[i])
    {
        if (format[i] == '%')
        {
            count += ft_printf_utils(format[i + 1], args);
            i += 2;
        }
        else if (format[i] != '%')
        {
            write(1, &format[i], 1);
            count++;
            i++;
        }
        else
            i++;
    }
    va_end(args);
    return(count);
}