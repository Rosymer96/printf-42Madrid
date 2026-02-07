#include "ft_printf.h"
#include <stdio.h>

int main(void)
{   
    int count;
    int ft_count;

    count = printf("printf: %c\n", 'f');
    ft_count = ft_printf("ft_pri: %c\n", 'f');

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf: %c %c %%\n", 'c', 'd', 's');
    ft_count = ft_printf("ft_pri: %c %c %%\n", 'c', 'd', 's');

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf: %c\n", 5);
    ft_count = ft_printf("ft_pri: %c\n", 5);

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf: % %% %%c\n", 'f');
    ft_count = ft_printf("ft_pri: % %% %%c\n", 'f');

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

};