#include "../ft_printf.h"
#include <stdio.h>

int main(void)
{
    unsigned int h = 3735928559; // Es 0xdeadbeef en decimal
    int count;
    int ft_count;
    
    // --- TEST 1: Hexadecimal Minúscula ---
    count = ft_printf("Mio hex: %x\n", h);
    ft_count = printf("Org hex: %x\n", h);
    printf("Contador Mio: %d | Contador Org: %d\n\n", count, ft_count);

    // --- TEST 2: Hexadecimal Mayúscula ---
    count = ft_printf("Mio HEX: %X\n", h);
    ft_count = printf("Org HEX: %X\n", h);
    printf("Contador Mio: %d | Contador Org: %d\n\n", count, ft_count);

    // --- TEST 3: NULL (Caso especial) ---
    count = ft_printf("Mio zero: %x\n", NULL);
    ft_count = printf("Org zero: %x\n", NULL);
    printf("Contador Mio: %d | Contador Org: %d\n\n", count, ft_count);

    // --- TEST 4: Hexadecimal Cero (Caso especial) ---
    count = ft_printf("Mio zero: %x\n", 0);
    ft_count = printf("Org zero: %x\n", 0);
    printf("Contador Mio: %d | Contador Org: %d\n\n", count, ft_count);

    // --- TEST 5: El límite del Unsigned Int ---
    unsigned int max_u = 4294967295; // 0xffffffff
    count = ft_printf("Mio MaxU: %x\n", max_u);
    ft_count = printf("Org MaxU: %x\n", max_u);
    printf("Mio: %d | Org: %d\n\n", count, ft_count);

    // --- TEST 6: Enteros negativos en formato Hex ---
    // Aunque el argumento sea negativo, %x lo lee como unsigned
    count = ft_printf("Mio Neg : %x\n", -1);
    ft_count = printf("Org Neg : %x\n", -1);
    printf("Mio: %d | Org: %d\n\n", count, ft_count);

}