#include "ft_printf.h"

int ft_printf_ptr(unsigned long long ptr)
{
    int count;

    count = 0;
    if (!ptr)
        return (write(1, "(nil)", 5));
    count += write(1, "0x", 2);
    count += ft_printf_hexa(ptr, "0123456789abcdef");
    return (count);
}