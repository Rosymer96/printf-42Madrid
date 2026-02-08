#include "../ft_printf.h"
#include <stdio.h>

int main(void)
{
    char *str;
    int count;
    int ft_count;
    str = "Alessia Xiuling";

    count = printf("printf   : %s\n", str);
    ft_count = ft_printf("ft_printf: %s\n", str);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf   : %%s\n", str);
    ft_count = ft_printf("ft_printf: %%s\n", str);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf   : %s\n", NULL);
    ft_count = ft_printf("ft_printf: %s\n", NULL);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf   : %s\n", "");
    ft_count = ft_printf("ft_printf: %s\n", "");
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf   : %%%s\n", str);
    ft_count = ft_printf("ft_printf: %%%s\n", str);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf   : %% %% %% %%s\n", str);
    ft_count = ft_printf("ft_printf: %% %% %% %%s\n", str);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf   : %% %% %s\n", str);
    ft_count = ft_printf("ft_printf: %% %% %s\n", str);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);
    
    int c1, c2;

    printf("===== BASIC =====\n");
    c1 = printf("printf   : %s\n", "hola");
    c2 = ft_printf("ft_printf: %s\n", "hola");
    printf("count: %d | %d\n\n", c1, c2);


    printf("===== EMPTY STRING =====\n");
    c1 = printf("printf   : %s\n", "");
    c2 = ft_printf("ft_printf: %s\n", "");
    printf("count: %d | %d\n\n", c1, c2);


    printf("===== NULL (MUY IMPORTANTE) =====\n");
    c1 = printf("printf   : %s\n", NULL);
    c2 = ft_printf("ft_printf: %s\n", NULL);
    printf("count: %d | %d\n\n", c1, c2);


    printf("===== SINGLE CHAR =====\n");
    c1 = printf("printf   : %s\n", "A");
    c2 = ft_printf("ft_printf: %s\n", "A");
    printf("count: %d | %d\n\n", c1, c2);


    printf("===== SPACES =====\n");
    c1 = printf("printf   : %s\n", "   ");
    c2 = ft_printf("ft_printf: %s\n", "   ");
    printf("count: %d | %d\n\n", c1, c2);


    printf("===== LONG STRING =====\n");
    char *longstr = "Lorem ipsum dolor sit amet consectetur adipiscing elit";
    c1 = printf("printf   : %s\n", longstr);
    c2 = ft_printf("ft_printf: %s\n", longstr);
    printf("count: %d | %d\n\n", c1, c2);


    printf("===== MULTIPLE %%s =====\n");
    c1 = printf("printf   : %s %s %s\n", "uno", "dos", "tres");
    c2 = ft_printf("ft_printf: %s %s %s\n", "uno", "dos", "tres");
    printf("count: %d | %d\n\n", c1, c2);


    printf("===== STRING WITHOUT NEWLINE =====\n");
    c1 = printf("printf   : %s", "test");
    c2 = ft_printf("ft_printf: %s", "test");
    printf("\ncount: %d | %d\n\n", c1, c2);

    return (0);
}