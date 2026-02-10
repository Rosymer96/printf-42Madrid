 #include "ft_printf.h"

int ft_putnbr(long n)
{
    int count;
    char    c;

    count = 0;
    if (n < 0)
    {
        count += write(1, "-", 1);
        n = -n;
    }
    if( n >= 10)
    {
        count += ft_putnbr(n / 10);
    }
    c = (n % 10) + '0';
    count += write(1, &c, 1);
    return(count);
}