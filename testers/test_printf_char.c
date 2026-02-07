#include "../ft_printf.h"
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

    count = printf("printf: %% %c\n", 'f');
    ft_count = ft_printf("ft_pri: %% %c\n", 'f');

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

    count = printf("printf: %% %c\n", NULL);
    ft_count = ft_printf("ft_pri: %% %c\n", NULL);

    printf("%d\n", count);
    printf("%d\n\n", ft_count);

	int res_ft;
	int res_orig;

	printf("--- TEST FT_PRINT_CHAR ---\n\n");

	// 1. Caso básico
	printf("1. Letra normal:\n");
	res_orig = printf("   Original: [%c]\n", 'A');
	res_ft = ft_printf("   El tuyo : [%c]\n", 'A');
	printf("   Retorno -> Orig: %d | FT: %d\n\n", res_orig, res_ft);

	// 2. Carácter nulo (OJO: Este es un caso límite famoso)
	// El printf debe imprimir el carácter \0 (un hueco vacío) y contar 1.
	printf("2. Caracter nulo (\\0):\n");
	res_orig = printf("   Original: [%c]\n", '\0');
	res_ft = ft_printf("   El tuyo : [%c]\n", '\0');
	printf("   Retorno -> Orig: %d | FT: %d\n\n", res_orig, res_ft);

	// 3. Caracteres especiales/imprimibles
	printf("3. Caracteres especiales:\n");
	res_orig = printf("   Original: [%c] [%c] [%c]\n", '\n', '\t', ' ');
	res_ft = ft_printf("   El tuyo : [%c] [%c] [%c]\n", '\n', '\t', ' ');
	printf("   Retorno -> Orig: %d | FT: %d\n\n", res_orig, res_ft);

	// 4. Caracteres fuera de ASCII estándar (Extended ASCII)
	printf("4. ASCII extendido (128-255):\n");
	res_orig = printf("   Original: [%c]\n", 200);
	res_ft = ft_printf("   El tuyo : [%c]\n", 200);
	printf("   Retorno -> Orig: %d | FT: %d\n\n", res_orig, res_ft);

	// 5. Múltiples argumentos seguidos
	printf("5. Muchos chars seguidos:\n");
	res_orig = printf("   Original: %c %c %c %c %c\n", '4', '2', 'M', 'a', 'd');
	res_ft = ft_printf("   El tuyo : %c %c %c %c %c\n", '4', '2', 'M', 'a', 'd');
	printf("   Retorno -> Orig: %d | FT: %d\n\n", res_orig, res_ft);

	return (0);
};