#include "libft.h"
#include <stdio.h>

// Función para imprimir el resultado de ft_split
void print_split(char **arr, const char *expected)
{
    size_t i = 0;
    if (!arr)
    {
        printf("(null) | Esperado: %s\n", expected);
        return;
    }
    while (arr[i])
    {
        printf("[%s] ", arr[i]);
        i++;
    }
    printf("| Esperado: %s\n", expected);
}

// Función para liberar el array devuelto por ft_split
void free_split(char **arr)
{
    size_t i = 0;
    if (!arr)
        return;
    while (arr[i])
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

char ft_prueba(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (ft_toupper(c));
    return(c);
}

void ft_prueba2(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper(*c);
}


int main(void)
{
    char    *s = "Hello, world!";
    char    *rsp;

    printf("--- INICIO DE TESTS.  FT_SUBSTR ---\n");

    // Test 1: Caso normal
    rsp = ft_substr(s, 0, 5);
    printf("Test 1 (Hello):  [%s]\n", rsp);
    free(rsp);

    // Test 2: Desde la mitad
    rsp = ft_substr(s, 7, 5);
    printf("Test 2 (world):  [%s]\n", rsp);
    free(rsp);

    // Test 3: Cortar hasta el final (len muy grande)
    rsp = ft_substr(s, 7, 50);
    printf("Test 3 (world!): [%s]\n", rsp);
    free(rsp);

    // Test 4: START FUERA DE RANGO
    // Se espera un string vacio rspervado, nada mas.
    rsp = ft_substr(s, 50, 5);
    if (rsp == NULL)
        printf("Test 4 (Error):  NULL (No debería ser NULL)\n");
    else
    {
        printf("Test 4 (Vacio):  [%s]\n", rsp);
        if (rsp[0] == '\0')
            printf("      -> OK: El primer caracter es un nulo.\n");
        else
            printf("      -> FAIL: Contiene basura: ASCII %d ('%c')\n", rsp[0], rsp[0]);
        free(rsp);
    }

    // Test 5: Len 0
    rsp = ft_substr(s, 0, 0);
    printf("Test 5 (Vacio):  [%s]\n", rsp);
    free(rsp);

    printf("Test strdup Vacio: [%s]\n", ft_strdup(""));
        
    printf("--- INICIO DE TESTS.  FT_STRJOIN ---\n");

    char *s1;
    char *s2;
    char *res;

    // -------------------------
    // Test 1: Strings normales
    // -------------------------
    s1 = "Hola, ";
    s2 = "mundo!";
    res = ft_strjoin(s1, s2);
    printf("Test 1 (Normal):     [%s] | Esperado: [Hola, mundo!]\n", res);
    free(res);

    // -------------------------
    // Test 2: s1 vacío
    // -------------------------
    s1 = "";
    s2 = "Prueba";
    res = ft_strjoin(s1, s2);
    printf("Test 2 (s1 vacio):   [%s] | Esperado: [Prueba]\n", res);
    free(res);

    // -------------------------
    // Test 3: s2 vacío
    // -------------------------
    s1 = "Prueba";
    s2 = "";
    res = ft_strjoin(s1, s2);
    printf("Test 3 (s2 vacio):   [%s] | Esperado: [Prueba]\n", res);
    free(res);

    // -------------------------
    // Test 4: Ambos vacíos
    // -------------------------
    s1 = "";
    s2 = "";
    res = ft_strjoin(s1, s2);
    printf("Test 4 (Ambos vacios): [%s] | Esperado: []\n", res);
    free(res);

    // -------------------------
    // Test 5: Strings largos
    // -------------------------
    s1 = "1234567890";
    s2 = "ABCDEFGHIJ";
    res = ft_strjoin(s1, s2);
    printf("Test 5 (Largo):      [%s] | Esperado: [1234567890ABCDEFGHIJ]\n", res);
    free(res);

    // -------------------------
    // Test 6: Caracteres especiales
    // -------------------------
    s1 = "Hola\n";
    s2 = "\tMundo!";
    res = ft_strjoin(s1, s2);
    printf("Test 6 (Especial):   [%s] | Esperado: [Hola\\n\\tMundo!]\n", res);
    free(res);

    // -------------------------
    // Test 7: NULL (opcional según implementación)
    // -------------------------
    s1 = NULL;
    s2 = "Hola";
    res = ft_strjoin(s1, s2);
    printf("Test 7a (s1 NULL):   [%s] | Esperado: [NULL]\n", res);
    free(res);

    s1 = "Hola";
    s2 = NULL;
    res = ft_strjoin(s1, s2);
    printf("Test 7b (s2 NULL):   [%s] | Esperado: [NULL]\n", res);
    free(res);

    printf("--- INICIO DE TESTS.  FT_STRTRIM ---\n");

    char *res1;
    // Test 1: espacios al inicio y final
    // -------------------------
    res1 = ft_strtrim("  Hola Mundo  ", " ");
    printf("Test 1 (espacios):    [%s] | Esperado: [Hola Mundo]\n", res1);
    free(res1);

    // -------------------------
    // Test 2: guiones al inicio y final
    // -------------------------
    res1 = ft_strtrim("--abc--", "-");
    printf("Test 2 (guiones):     [%s] | Esperado: [abc]\n", res1);
    free(res1);

    // -------------------------
    // Test 3: caracteres especiales
    // -------------------------
    res1 = ft_strtrim("\n\tHola\t\n", "\n\t");
    printf("Test 3 (especiales):  [%s] | Esperado: [Hola]\n", res1);
    free(res1);

    // -------------------------
    // Test 4: string vacío
    // -------------------------
    res1 = ft_strtrim("", " ");
    printf("Test 4 (vacio s1):    [%s] | Esperado: []\n", res1);
    free(res1);

    // -------------------------
    // Test 5: set vacío
    // -------------------------
    res1 = ft_strtrim("Hola Mundo", "");
    printf("Test 5 (vacio set):   [%s] | Esperado: [Hola Mundo]\n", res1);
    free(res1);

    // -------------------------
    // Test 6: s1 = set (todo eliminado)
    // -------------------------
    res1 = ft_strtrim("aaaaa", "a");
    printf("Test 6 (todo set):    [%s] | Esperado: []\n", res1);
    free(res1);

    // -------------------------
    // Test 7: sin coincidencias (no se recorta)
    // -------------------------
    res1 = ft_strtrim("Hola Mundo", "xyz");
    printf("Test 7 (sin recorte): [%s] | Esperado: [Hola Mundo]\n", res1);
    free(res1);

    // -------------------------
    // Test 8: NULL (opcional, según implementación)
    // -------------------------
    res1 = ft_strtrim(NULL, " ");
    printf("Test 8a (s1 NULL):    [%s] | Esperado: [NULL]\n", res1); // imprime (null)
    free(res1);

    res1 = ft_strtrim("Hola", NULL);
    printf("Test 8b (set NULL):   [%s] | Esperado: [NULL]\n", res1); // imprime (null)
    free(res1);

    // -------------------------
    // Test: set con 2 caracteres
    // -------------------------
    res1 = ft_strtrim("++_Hola_Mundo__+", "+_");
    printf("Test Set 2 chars:     [%s] | Esperado: [Hola_Mundo]\n", res1);
    free(res1);

    // -------------------------
    // Test: set con 3 caracteres
    // -------------------------
    res1 = ft_strtrim("***--Hola--***", "*-");
    printf("Test Set 3 chars:     [%s] | Esperado: [Hola]\n", res1);
    free(res1);

    printf("--- INICIO DE TESTS.  FT_SPLIT---\n");

    char **res_split;

    // -------------------------
    // Test 1: caso normal
    // -------------------------
    printf("Test 1: \"Hola mundo 42\"\n");
    res_split = ft_split("Hola mundo 42", ' ');
    print_split(res_split, "[Hola] [mundo] [42]");
    free_split(res_split);

    // -------------------------
    // Test 2: múltiples delimitadores_split seguidos
    // -------------------------
    printf("\nTest 2: \"Hola,,mundo,,42\"\n");
    res_split = ft_split("Hola,,mundo,,42", ',');
    print_split(res_split, "[Hola] [mundo] [42]");
    free_split(res_split);

    // -------------------------
    // Test 3: delimitadores_split al inicio y final
    // -------------------------
    printf("\nTest 3: \",,Hola,mundo,,\"\n");
    res_split = ft_split(",,Hola,mundo,,", ',');
    print_split(res_split, "[Hola] [mundo]");
    free_split(res_split);

    // -------------------------
    // Test 4: string sin delimitador
    // -------------------------
    printf("\nTest 4: \"Hola\"\n");
    res_split = ft_split("Hola", ',');
    print_split(res_split, "[Hola]");
    free_split(res_split);

    // -------------------------
    // Test 5: string vacío
    // -------------------------
    printf("\nTest 5: \"\"\n");
    res_split = ft_split("", ' ');
    print_split(res_split, "(ninguna palabra)");
    free_split(res_split);

    // -------------------------
    // Test 6: solo delimitadores_split
    // -------------------------
    printf("\nTest 6: \"/////\"\n");
    res_split = ft_split("/////", '/');
    print_split(res_split, "(ninguna palabra)");
    free_split(res_split);

    // -------------------------
    // Test 7: delimitador = '\\0'
    // -------------------------
    printf("\nTest 7: delimitador '\\0'\n");
    res_split = ft_split("Hola", '\0');
    print_split(res_split, "[Hola]");
    free_split(res_split);

    // -------------------------
    // Test 8: números y letras
    // -------------------------
    printf("\nTest 8: \"12-34-56\"\n");
    res_split = ft_split("12-34-56", '-');
    print_split(res_split, "[12] [34] [56]");
    free_split(res_split);

    printf("\nTest 9: Una sola letra \"a\" con delimitador ' ' \n");
    res_split = ft_split("a", ' ');
    print_split(res_split, "[a]");
    free_split(res_split);

    printf("\nTest 10: \"lorem ipsum\" con delimitador 'z' \n");
    res_split = ft_split("lorem ipsum", 'z');
    print_split(res_split, "[lorem ipsum]");
    free_split(res_split);

    printf("\nTest 11: s es NULL\n");
    res_split = ft_split(NULL, ' ');
    if (res_split == NULL)
    printf("Resultado: NULL (Correcto)\n\n");
    else
    printf("Resultado: KO (Debería ser NULL)\n");

    printf("--- INICIO DE TESTS.  FT_ITOA\n");
    printf("%s\n", ft_itoa(-153));
    printf("%s\n", ft_itoa(42));
    printf("%s\n", ft_itoa(-2147483648));
    printf("%s\n", ft_itoa(2147483647));
    printf("%s\n", ft_itoa(0));

    printf("--- INICIO DE TESTS.  FT_STRMAPI\n");

    char *s_mapi = "hola";
    printf("%s\n", ft_strmapi(s_mapi, ft_prueba));
    
    printf("--- INICIO DE TESTS.  FT_STRITERI\n");

    char s_iteri[] = "hola";
    ft_striteri(s_iteri, ft_prueba2);
    printf("%s\n", s_iteri);

    printf("--- INICIO DE TESTS.  FT_PUTCHAR_FD\n");
    ft_putchar_fd('H', 1);
    ft_putchar_fd('o', 1);
    ft_putchar_fd('l', 1);
    ft_putchar_fd('a', 1);
    ft_putchar_fd('\n', 1);
    ft_putchar_fd('\0', 1);
    printf("Ahora escribiendo en stderr:\n");
    ft_putchar_fd('E', 2);
    ft_putchar_fd('R', 2);
    ft_putchar_fd('R', 2);
    ft_putchar_fd('\n', 2);

    printf("--- INICIO DE TESTS.  FT_PUTSTR_FD\n");

    printf("Prueba ft_putstr_fd en stdout:\n");
    ft_putstr_fd("Hola desde libft\n", 1);

    printf("Prueba ft_putstr_fd en stderr:\n");
    ft_putstr_fd("Mensaje de error\n", 2);

    printf("Prueba con string vacía:\n");
    ft_putstr_fd("", 1);
    ft_putstr_fd("\n", 1);

    printf("Prueba con NULL (no debe hacer nada):\n");
    ft_putstr_fd(NULL, 1);
    printf("He terminado de probar NULL\n");

    printf("--- INICIO DE TESTS.  FT_PUTENDL_FD\n");

    printf("Prueba ft_putendl_fd en stdout:\n");
    ft_putendl_fd("Hola mundo", 1);

    printf("Prueba ft_putendl_fd en stderr:\n");
    ft_putendl_fd("Mensaje de error", 2);

    printf("Prueba con string vacía:\n");
    ft_putendl_fd("", 1);

    printf("Prueba con NULL (no debe hacer nada):\n");
    ft_putendl_fd(NULL, 1);
    printf("He terminado de probar NULL\n");

    printf("--- INICIO DE TESTS.  FT_PUTNBR_FD\n");
    ft_putnbr_fd(42, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(-42, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);

    printf("--- INICIO DE TESTS.  FT_LSTNEW \n");

    t_list	*node;
	char	*str = "Hola libft";

	node = ft_lstnew(str);

	if (!node)
		return (1);

	printf("content: %s\n", (char *)node->content);
	printf("next: %p\n", (void *)node->next);
    
    printf("--- TEST FT_LSTADD_FRONT + FT_LSTNEW ---\n");
    t_list *head = NULL;  // lista vacía al inicio
    t_list *node1;
    t_list *node2;


    // Crear nodos
    node1 = ft_lstnew("Primer nodo");
    node2 = ft_lstnew("Segundo nodo");

    // Agregar nodos al frente
    ft_lstadd_front(&head, node1);  // Lista: Primer nodo
    ft_lstadd_front(&head, node2);  // Lista: Segundo nodo -> Primer nodo

    // Recorrer la lista e imprimir
    t_list *tmp = head;
    int i = 1;
    while (tmp)
    {
        printf("Nodo %d: %s\n", i, (char *)tmp->content);
        tmp = tmp->next;
        i++;
    }

    // Comprobar el next del último nodo
    if (head->next->next == NULL)
        printf("Último nodo apunta a NULL ✅\n");

	return (0);
}