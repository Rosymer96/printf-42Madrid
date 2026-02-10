*Este proyecto ha sido creado como parte del currículo de 42 por rosvela.*

## Descripción

**ft_printf** es una implementación propia de la función "printf" de la librería estándar de C.

El objetivo de este proyecto fue recrear el comportamiento de la función printf() sin utilizar la original, gestionando:

- Argumentos variables (stdarg.h)

- Conversión de tipos

- Escritura directa en stdout con write()

- Manejo del número de caracteres impresos

La función devuelve el número total de caracteres escritos, o -1 en caso de error.

## Instrucciones

### Compilación

Para compilar la librería, ejecuta:

```bash
make
```

Esto generará el archivo `libftprintf.a` que contiene todas las funciones compiladas.

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

1. Copia los archivos `ft_printf.h` y `libftprintf.a` a tu proyecto
2. Incluye el header: `#include "ft_printf.h"`
3. Compila tu programa vinculando la librería:

cc -Wall -Wextra -Werror programa.c libftprintf.a -o programa

### Funciones implementadas

| Formato | Descripción            |
| ------- | ---------------------- |
| `%c`    | Caracter               |
| `%s`    | String                 |
| `%p`    | Puntero                |
| `%d`    | Entero decimal         |
| `%i`    | Entero decimal         |
| `%u`    | Entero sin signo       |
| `%x`    | Hexadecimal minúsculas |
| `%X`    | Hexadecimal mayúsculas |
| `%%`    | Símbolo `%`            |

### Conceptos trabajados

- Funciones variádicas (va_list, va_start, va_arg, va_end)

- Recursividad

- Conversión de bases numéricas

- Manejo manual de salida estándar (write)

- Gestión de errores y conteo de caracteres

### Estructura del proyecto

ft_printf/
│
├── ft_printf.c
├── ft_printf_char.c
├── ft_printf_str.c
├── ft_printf_ptr.c
├── ft_printf_int.c
├── ft_printf_base.c
├── ft_putnbr.c
├── ft_printf.h
└── Makefile

## Recursos

### Documentación Oficial
- [Manual de C (man pages)](https://man7.org/linux/man-pages/man3/).
- [Manual de printf (man pages)](https://man7.org/linux/man-pages/man3/printf.3.html).
- [Documentación de funciones variádicas (man pages)](https://man7.org/linux/man-pages/man3/stdarg.3.html).
- Subject oficial de ft_printf (42).

### Uso de IA en este Proyecto

La IA se utilizó en las siguientes tareas:

- Sugerencias de casos límite y testing

- Consulta de documentación

- Mejora de redacción del README

Toda la lógica e implementación del código fue desarrollada manualmente.

## Autor

- **rosvela** - Estudiante de 42 Madrid

---
