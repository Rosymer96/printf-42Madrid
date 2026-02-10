#include "../ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_count;
    int count;

    // --- CASO 1: Unsigned Int ---
    // Prueba con el número más grande posible para un unsigned
    unsigned int u_max = 4294967295;
    count = printf("printf: %u\n", u_max);
    ft_count = ft_printf("ft_pri: %u\n", u_max);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 2: Unsigned Cero ---
    // El cero siempre es un caso crítico en recursividad
    count = printf("printf: %u\n", 0);
    ft_count = ft_printf("ft_pri: %u\n", 0);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 3: Unsigned número pequeño ---
    count = printf("printf: %u\n", 10);
    ft_count = ft_printf("ft_pri: %u\n", 10);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 4: Unsigned pasando un negativo ---
    // Esto es muy común: ¿qué pasa si le pasas -1 a un %u?
    // Debe imprimir 4294967295 porque se interpreta como unsigned
    count = printf("printf: %u\n", -1);
    ft_count = ft_printf("ft_pri: %u\n", -1);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 5: Unsigned pasando el valor mínimo de un int ---
    // -2147483648 en unsigned debería ser 2147483648
    count = printf("printf: %u\n", -2147483648);
    ft_count = ft_printf("ft_pri: %u\n", -2147483648);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 6: Número unsigned "grande" pero no máximo ---
    unsigned int mid = 3000000000;
    count = printf("printf: %u\n", mid);
    ft_count = ft_printf("ft_pri: %u\n", mid);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);
    return (0);
}