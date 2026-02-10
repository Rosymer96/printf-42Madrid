#include "../ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_count;
    int count;

    // --- CASO 1: El cero ---
    // Importante ver si imprime '0' y cuenta 1
    count = printf("printf: %d\n", 0);
    ft_count = ft_printf("ft_pri: %d\n", 0);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 2: NULL en un entero ---
    // Nota: Pasar NULL a %i es un error de uso, suele imprimir 0
    count = printf("printf: %i\n", (int)(size_t)NULL);
    ft_count = ft_printf("ft_pri: %i\n", (int)(size_t)NULL);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 3: Número negativo estándar ---
    // Verifica que el signo '-' cuente como un caracter
    count = printf("printf: %d\n", -42);
    ft_count = ft_printf("ft_pri: %d\n", -42);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 4: INT_MAX ---
    // El límite superior de los enteros
    count = printf("printf: %i\n", 2147483647);
    ft_count = ft_printf("ft_pri: %i\n", 2147483647);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 5: INT_MIN ---
    // ¡El caso más difícil! Aquí es donde brilla el uso de 'long'
    count = printf("printf: %d\n", -2147483648);
    ft_count = ft_printf("ft_pri: %d\n", -2147483648);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 6: Pasar un string a un entero ---
    // Esto imprimirá la dirección de memoria del string convertida a int
    // No es un uso normal, pero sirve para ver que no crashea
    count = printf("printf: %i\n", (int)(size_t)"fa il");
    ft_count = ft_printf("ft_pri: %i\n", (int)(size_t)"fa il");
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 7: El número 0 explícitamente ---
    // A veces la recursividad falla con el 0 si no se controla bien
    count = printf("printf: %d\n", 000);
    ft_count = ft_printf("ft_pri: %d\n", 000);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 8: Múltiples modificadores ---
    // Para ver si tu bucle while en ft_printf.c sigue avanzando bien
    count = printf("printf: %d y %i y %d\n", 42, -42, 0);
    ft_count = ft_printf("ft_pri: %d y %i y %d\n", 42, -42, 0);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);

    // --- CASO 9: Texto después del número ---
    // Para asegurar que el conteo de caracteres no se detiene tras el número
    count = printf("printf: %d es la respuesta.\n", 42);
    ft_count = ft_printf("ft_pri: %d es la respuesta.\n", 42);
    printf("Mio: %d | Org: %d\n\n", ft_count, count);


    
    return (0);
}