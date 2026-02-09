#include "../ft_printf.h"
#include <stdio.h>

int main(void)
{
    void *p1 = NULL;
    int count;
    int ft_count;

    // --- TEST 1: Puntero NULL (System Behavior Test) ---
    ft_count = ft_printf("ft_pri: %p\n", p1);
    count = printf("printf: %p\n", p1);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    // --- TEST 2: Test de dirección baja:  '0x1' y no como '0x01' o '0x00000001' ---

    void *p2 = (void *)1;
    ft_count = ft_printf("Mio: %p\n", p2);
    count = printf("Org: %p\n", p2);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    // --- TEST 3: Puntero Máximo (Overflow Test) --

    void *p3 = (void *)-1; // (0xffffffffffffffff)
    ft_count = ft_printf("Mio: %p\n", p3);
    count = printf("Org: %p\n", p3);
    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    int a = 42;
    // --- TEST 4: Dirección en el Stack (Variable local) ---
    ft_count = ft_printf("Mio Stack: %p\n", &a);
    count = printf("Org Stack: %p\n", &a);
    printf("Mio: %d | Org: %d\n\n", count, ft_count);

    // --- TEST 5: Dirección de una Función (Memoria de Código) ---
    ft_count = ft_printf("Mio Func : %p\n", ft_printf);
    count = printf("Org Func : %p\n", ft_printf);
    printf("Mio: %d | Org: %d\n\n", count, ft_count);
    return (0);
}