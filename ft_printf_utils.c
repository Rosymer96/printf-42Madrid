void    ft_printf_utils(char format, va_list args)
{
    if(format == 'c')
        return(ft_print_char(va_arg(args, int)));
}            