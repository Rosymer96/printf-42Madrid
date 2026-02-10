#include "ft_printf.h"

int     ft_printf_int(int n)
{
    long    num;

    num = n;
    return(ft_putnbr(num));
}