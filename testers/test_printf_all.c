#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>

void header(char *title)
{
	printf("\n--- %s ---\n", title);
}

int main(void)
{
	int ft_cnt;
	int or_cnt;
	char *str = "Hola Mundo";
	void *ptr = &str;

	// 1. CARACTERES Y STRINGS
	header("CHAR Y STRING");
	or_cnt = printf("Org: Caracter: [%c] String: [%s]\n", 'A', "42 Madrid");
	ft_cnt = ft_printf("Mio: Caracter: [%c] String: [%s]\n", 'A', "42 Madrid");
	printf("Retorno -> Org: %d | Mio: %d\n", or_cnt, ft_cnt);

	or_cnt = printf("Org: String NULL: [%s]\n", (char *)NULL);
	ft_cnt = ft_printf("Mio: String NULL: [%s]\n", (char *)NULL);
	printf("Retorno -> Org: %d | Mio: %d\n", or_cnt, ft_cnt);

	// 2. ENTEROS (d e i)
	header("ENTEROS (%d y %i)");
	or_cnt = printf("Org: Cero: %d | Neg: %i | Max: %d | Min: %i\n", 0, -42, INT_MAX, INT_MIN);
	ft_cnt = ft_printf("Mio: Cero: %d | Neg: %i | Max: %d | Min: %i\n", 0, -42, INT_MAX, INT_MIN);
	printf("Retorno -> Org: %d | Mio: %d\n", or_cnt, ft_cnt);

	// 3. UNSIGNED (u)
	header("UNSIGNED (%u)");
	or_cnt = printf("Org: U_Max: %u | U_Cero: %u | U_Neg(-1): %u\n", UINT_MAX, 0, -1);
	ft_cnt = ft_printf("Mio: U_Max: %u | U_Cero: %u | U_Neg(-1): %u\n", UINT_MAX, 0, -1);
	printf("Retorno -> Org: %d | Mio: %d\n", or_cnt, ft_cnt);

	// 4. HEXADECIMALES (x y X)
	header("HEXADECIMAL (%x y %X)");
	or_cnt = printf("Org: Hex_Low: %x | Hex_Up: %X | Hex_Cero: %x\n", 255, 255, 0);
	ft_cnt = ft_printf("Mio: Hex_Low: %x | Hex_Up: %X | Hex_Cero: %x\n", 255, 255, 0);
	printf("Retorno -> Org: %d | Mio: %d\n", or_cnt, ft_cnt);

	// 5. PUNTEROS (p)
	header("PUNTEROS (%p)");
	or_cnt = printf("Org: Ptr: %p | Ptr_Null: %p\n", ptr, NULL);
	ft_cnt = ft_printf("Mio: Ptr: %p | Ptr_Null: %p\n", ptr, NULL);
	printf("Retorno -> Org: %d | Mio: %d\n", or_cnt, ft_cnt);

	// 6. PORCENTAJE (%)
	header("PORCENTAJE (%%)");
	or_cnt = printf("Org: Porcentaje: [%%] Triple: [%%%%%%]\n");
	ft_cnt = ft_printf("Mio: Porcentaje: [%%] Triple: [%%%%%%]\n");
	printf("Retorno -> Org: %d | Mio: %d\n", or_cnt, ft_cnt);

	// 7. MIXTO
	header("MIXTO");
	or_cnt = printf("Org: %d %s %% %x\n", 42, "Prueba", 42);
	ft_cnt = ft_printf("Mio: %d %s %% %x\n", 42, "Prueba", 42);
	printf("Retorno -> Org: %d | Mio: %d\n", or_cnt, ft_cnt);

	return (0);
}