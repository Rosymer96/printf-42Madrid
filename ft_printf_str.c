#include "ft_printf.h"

int ft_printf_str(char *str)
{
    int len;

    if (!str)
        str = "(null)";
    len = (int)ft_strlen(str);
    ft_putstr_fd(str, 1);
    return (len);
}