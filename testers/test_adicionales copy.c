#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int count;
    int ft_count;

    count = printf("%", 'f');
    ft_count = ft_printf("%", 'f');

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("%%", 'f');
    printf("\n");
    ft_count = ft_printf("%%", 'f');
    printf("\n");

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("%k", 'f');
    printf("\n");
    ft_count = ft_printf("%k", 'f');
    printf("\n");

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("", "hola");
    printf("\n");
    ft_count = ft_printf("", "hola");
    printf("\n");

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("hola sin format");
    printf("\n");
    ft_count = ft_printf("hola sin format");
    printf("\n");

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf(NULL, "hola sin format");
    printf("\n");
    ft_count = ft_printf(NULL, "hola sin format");
    printf("\n");

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("%s", "hola%");
    printf("\n");
    ft_count = ft_printf("%s", "hola%");
    printf("\n");

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("%s", "hola%pepe");
    printf("\n");
    ft_count = ft_printf("%s", "hola%pepe");
    printf("\n");

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    return (0);
}