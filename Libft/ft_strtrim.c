/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:58:58 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 16:36:18 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static size_t	get_end(size_t start, char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dup;
	size_t	dup_len;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(start, s1, set);
	dup_len = end - start;
	dup = (char *)malloc(sizeof(char) * dup_len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < dup_len)
	{
		dup[i] = s1[start + i];
		i++;
	}
	dup[dup_len] = '\0';
	return (dup);
}
/*
int	main(void)
{
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
    printf("Test 8a (s1 NULL):    [%s] | Esperado: [NULL]\n", res1);
	// imprime (null)
    free(res1);

    res1 = ft_strtrim("Hola", NULL);
    printf("Test 8b (set NULL):   [%s] | Esperado: [NULL]\n", res1);
	// imprime (null)
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

}*/
