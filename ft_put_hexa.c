int ft_put_hexa(unsigned long long n, char *base)
{
    int count;

    count = 0;
    if (n >= 16)
        count + = ft_put_hexa(n/16, base);
    count += ft_printf_char(base[n % 16]);
    return (count);
}