#include "ft_printf.h"

int ft_printf_base(unsigned long long n, char *base, unsigned int len)
{
    int count;

    count = 0;
    if (n >= len)
        count += ft_printf_base(n/len, base, len);
    count += ft_printf_char(base[n % len]);
    return (count);
}