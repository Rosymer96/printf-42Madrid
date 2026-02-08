int ft_printf_ptr(unsigned long long ptr)
{
    int count;

    count = 0;
    if (!ptr)
        return (write(1, "0x0", 3));
    count += write(1, "0x", 2);
    count += ft_put_hexa(ptr, "0123456789abcdef");
    return (count);
}