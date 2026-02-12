*Este proyecto ha sido creado como parte del currículo de 42 por rosvela.*

## Descripción

**LIBFT** es una librería en C que reimplementa funciones estándar de la librería de C (`libc`). El objetivo principal es aprender y comprender cómo funcionan internamente las funciones más utilizadas del lenguaje C, implementándolas desde cero.

Esta librería proporciona:
- Funciones de clasificación de caracteres (`ft_isalpha`, `ft_isdigit`, etc.)
- Funciones de manipulación de memoria (`ft_memset`, `ft_memcpy`, `ft_memmove`, etc.)
- Funciones de manipulación de cadenas (`ft_strlen`, `ft_strchr`, `ft_strdup`, etc.)
- Funciones de conversión (`ft_atoi`, `ft_itoa`)
- Funciones de salida con descriptor de archivo (`ft_putchar_fd`, `ft_putstr_fd`, etc.)
- Funciones de manejo de listas enlazadas (`ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, etc.)

## Instrucciones

### Compilación

Para compilar la librería, ejecuta:

```bash
make
```

Esto generará el archivo `libft.a` que contiene todas las funciones compiladas.

### Limpieza

Para eliminar los archivos objeto:

```bash
make clean
```

Para eliminar todo (incluida la librería compilada):

```bash
make fclean
```

Para recompilar desde cero:

```bash
make re
```

### Uso en tu proyecto

1. Copia los archivos `libft.h` y `libft.a` a tu proyecto
2. Incluye el header en tu código: `#include "libft.h"`
3. Compila tu programa vinculando la librería:

```bash
cc -Wall -Wextra -Werror programa.c -L. -lft -o programa
```

## Referencia de Funciones

### Funciones de Clasificación de Caracteres

| Función | Descripción |
|---------|-------------|
| [`ft_isalpha`](ft_isalpha.c) | Verifica si es una letra (A-Z, a-z) |
| [`ft_isdigit`](ft_isdigit.c) | Verifica si es un dígito (0-9) |
| [`ft_isalnum`](ft_isalnum.c) | Verifica si es letra o dígito |
| [`ft_isascii`](ft_isascii.c) | Verifica si está en rango ASCII (0-127) |
| [`ft_isprint`](ft_isprint.c) | Verifica si es imprimible (32-126) |

### Funciones de Manipulación de Memoria

| Función | Descripción |
|---------|-------------|
| [`ft_memset`](ft_memset.c) | Llena un área de memoria con un valor |
| [`ft_bzero`](ft_bzero.c) | Pone a cero un área de memoria |
| [`ft_memcpy`](ft_memcpy.c) | Copia memoria (no maneja superposición) |
| [`ft_memmove`](ft_memmove.c) | Copia memoria (maneja superposición) |
| [`ft_memchr`](ft_memchr.c) | Busca un byte en memoria |
| [`ft_memcmp`](ft_memcmp.c) | Compara dos áreas de memoria |

### Funciones de Manipulación de Cadenas

| Función | Descripción |
|---------|-------------|
| [`ft_strlen`](ft_strlen.c) | Calcula la longitud de una cadena |
| [`ft_strchr`](ft_strchr.c) | Busca un carácter en una cadena (primera ocurrencia) |
| [`ft_strrchr`](ft_strrchr.c) | Busca un carácter en una cadena (última ocurrencia) |
| [`ft_strncmp`](ft_strncmp.c) | Compara n caracteres de dos cadenas |
| [`ft_strlcpy`](ft_strlcpy.c) | Copia cadena con límite de tamaño (segura) |
| [`ft_strlcat`](ft_strlcat.c) | Concatena cadenas con límite (segura) |
| [`ft_strnstr`](ft_strnstr.c) | Busca una subcadena dentro de n caracteres |
| [`ft_strdup`](ft_strdup.c) | Duplica una cadena en memoria dinámica |
| [`ft_substr`](ft_substr.c) | Extrae una subcadena |
| [`ft_strjoin`](ft_strjoin.c) | Concatena dos cadenas con malloc |
| [`ft_strtrim`](ft_strtrim.c) | Elimina caracteres de los extremos |
| [`ft_split`](ft_split.c) | Divide una cadena por un separador |

### Funciones de Conversión

| Función | Descripción |
|---------|-------------|
| [`ft_toupper`](ft_toupper.c) | Convierte a mayúscula |
| [`ft_tolower`](ft_tolower.c) | Convierte a minúscula |
| [`ft_atoi`](ft_atoi.c) | Convierte cadena a entero |
| [`ft_itoa`](ft_itoa.c) | Convierte entero a cadena |

### Funciones de Mapeo de Cadenas

| Función | Descripción |
|---------|-------------|
| [`ft_strmapi`](ft_strmapi.c) | Aplica función a cada carácter (retorna nueva cadena) |
| [`ft_striteri`](ft_striteri.c) | Aplica función a cada carácter (modifica in-place) |

### Funciones de Salida

| Función | Descripción |
|---------|-------------|
| [`ft_putchar_fd`](ft_putchar_fd.c) | Escribe un carácter en descriptor |
| [`ft_putstr_fd`](ft_putstr_fd.c) | Escribe una cadena en descriptor |
| [`ft_putendl_fd`](ft_putendl_fd.c) | Escribe una cadena + salto de línea |
| [`ft_putnbr_fd`](ft_putnbr_fd.c) | Escribe un número en descriptor |

### Funciones de Listas Enlazadas

| Función | Descripción |
|---------|-------------|
| [`ft_lstnew`](ft_lstnew.c) | Crea un nuevo nodo |
| [`ft_lstadd_front`](ft_lstadd_front.c) | Añade nodo al inicio |
| [`ft_lstadd_back`](ft_lstadd_back.c) | Añade nodo al final |
| [`ft_lstsize`](ft_lstsize.c) | Cuenta nodos en la lista |
| [`ft_lstlast`](ft_lstlast.c) | Obtiene el último nodo |
| [`ft_lstdelone`](ft_lstdelone.c) | Elimina un nodo |
| [`ft_lstclear`](ft_lstclear.c) | Elimina toda la lista |
| [`ft_lstiter`](ft_lstiter.c) | Aplica función a cada nodo |
| [`ft_lstmap`](ft_lstmap.c) | Crea nueva lista aplicando función |

### Funciones de Utilidad

| Función | Descripción |
|---------|-------------|
| [`ft_calloc`](ft_calloc.c) | Asigna memoria inicializada a cero |

## Decisiones Técnicas

### Gestión de Memoria
- Se utiliza `malloc` y `free` para asignación dinámica
- Se validan punteros nulos antes de operar
- Se implementa manejo de desbordamiento en `ft_calloc`

### Listas Enlazadas
Estructura de nodo:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

### Funciones de Mapeo
- [`ft_strmapi`](ft_strmapi.c) y [`ft_striteri`](ft_striteri.c) permiten aplicar funciones a cadenas de forma funcional
- Útiles para transformaciones complejas

## Recursos

### Documentación Oficial
- [Manual de C (man pages)](https://man7.org/linux/man-pages/man3/)
- [The C Programming Language - Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [42 Network Intra](https://intra.42.fr/)
- [42 School Curriculum](https://42.fr/)

### Uso de IA en este Proyecto

La IA se utilizó en las siguientes tareas:

1. **Depuración de código**: Ayudó a identificar edge cases en funciones como [`ft_split`](ft_split.c) y [`ft_strtrim`](ft_strtrim.c)
2. **Optimización de memoria**: Sugerencias en manejo de desbordamientos en [`ft_calloc`](ft_calloc.c)
3. **Testeo**: Sugerencias de casos límite necesarios para probar correctamente todas las funciones.

## Autor

- **rosvela** - Estudiante de 42 Madrid

---
