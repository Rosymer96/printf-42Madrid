#include <printf.h>

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
            count += manage_format(format[i + i]);
            i++;
        }
        else
        {
            write(1, &fmt[i], 1);
            count++;
        }
    }
    va_end(args);
    return(count);
}
