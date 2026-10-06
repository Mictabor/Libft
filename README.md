# Libft
_Este proyecto ha sido creado como parte del currículo de 42 por micatabo._

# Libft

## Descripción

Libft es la primera librería propia desarrollada en el currículo de 42. El objetivo es reimplementar un conjunto de funciones estándar de C y añadir funciones adicionales de utilidad general, que servirán como base para proyectos futuros del cursus.

La librería se divide en tres partes:

- **Parte 1 – Funciones de libc:** reimplementación de funciones estándar como `ft_strlen`, `ft_memcpy`, `ft_atoi`, etc.
- **Parte 2 – Funciones adicionales:** funciones de utilidad no presentes en libc o con comportamiento extendido, como `ft_substr`, `ft_split`, `ft_itoa`, etc.
- **Parte 3 – Listas enlazadas:** funciones para crear y manipular listas enlazadas simples usando la estructura `t_list`.

## Instrucciones

### Compilación

```bash
make
```

Esto genera el archivo `libft.a` en la raíz del repositorio.

### Reglas del Makefile

| Regla     | Descripción                          |
|-----------|--------------------------------------|
| `make`    | Compila la librería                  |
| `make clean`  | Elimina los archivos objeto (`.o`) |
| `make fclean` | Elimina los `.o` y `libft.a`      |
| `make re`     | Recompila desde cero               |
| `make bonus`  | Compila incluyendo las funciones de listas enlazadas |

### Uso en otro proyecto

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

Incluye el header en tu código:

```c
#include "libft.h"
```

## Descripción detallada de la librería

### Parte 1 – Funciones de libc

| Función | Descripción |
|---|---|
| `ft_isalpha` | Comprueba si el carácter es alfabético |
| `ft_isdigit` | Comprueba si el carácter es un dígito |
| `ft_isalnum` | Comprueba si el carácter es alfanumérico |
| `ft_isascii` | Comprueba si el carácter pertenece al rango ASCII |
| `ft_isprint` | Comprueba si el carácter es imprimible |
| `ft_strlen` | Devuelve la longitud de una cadena |
| `ft_memset` | Rellena un bloque de memoria con un valor |
| `ft_bzero` | Pone a cero un bloque de memoria |
| `ft_memcpy` | Copia un bloque de memoria |
| `ft_memmove` | Copia un bloque de memoria manejando solapamientos |
| `ft_strlcpy` | Copia una cadena con tamaño máximo |
| `ft_strlcat` | Concatena cadenas con tamaño máximo |
| `ft_toupper` | Convierte un carácter a mayúscula |
| `ft_tolower` | Convierte un carácter a minúscula |
| `ft_strchr` | Busca un carácter en una cadena (desde el inicio) |
| `ft_strrchr` | Busca un carácter en una cadena (desde el final) |
| `ft_strncmp` | Compara dos cadenas hasta n caracteres |
| `ft_memchr` | Busca un byte en un bloque de memoria |
| `ft_memcmp` | Compara dos bloques de memoria |
| `ft_strnstr` | Busca una subcadena dentro de otra |
| `ft_atoi` | Convierte una cadena a entero |
| `ft_calloc` | Reserva memoria inicializada a cero |
| `ft_strdup` | Duplica una cadena con malloc |

### Parte 2 – Funciones adicionales

| Función | Descripción |
|---|---|
| `ft_substr` | Extrae una subcadena de una cadena |
| `ft_strjoin` | Concatena dos cadenas en una nueva |
| `ft_strtrim` | Elimina caracteres de un conjunto al inicio y al final de una cadena |
| `ft_split` | Divide una cadena usando un carácter delimitador |
| `ft_itoa` | Convierte un entero a cadena |
| `ft_strmapi` | Aplica una función a cada carácter de una cadena, creando una nueva |
| `ft_striteri` | Aplica una función a cada carácter de una cadena, modificándola in place |
| `ft_putchar_fd` | Escribe un carácter en un file descriptor |
| `ft_putstr_fd` | Escribe una cadena en un file descriptor |
| `ft_putendl_fd` | Escribe una cadena seguida de salto de línea en un file descriptor |
| `ft_putnbr_fd` | Escribe un entero en un file descriptor |

### Parte 3 – Listas enlazadas

La estructura utilizada es:

```c
typedef struct s_list
{
    void         *content;
    struct s_list *next;
} t_list;
```

| Función | Descripción |
|---|---|
| `ft_lstnew` | Crea un nuevo nodo con el contenido dado |
| `ft_lstadd_front` | Añade un nodo al inicio de la lista |
| `ft_lstsize` | Devuelve el número de nodos de la lista |
| `ft_lstlast` | Devuelve el último nodo de la lista |
| `ft_lstadd_back` | Añade un nodo al final de la lista |
| `ft_lstdelone` | Libera un nodo usando una función `del` |
| `ft_lstclear` | Libera todos los nodos de la lista |
| `ft_lstiter` | Aplica una función al contenido de cada nodo |
| `ft_lstmap` | Crea una nueva lista aplicando una función a cada nodo |

## Recursos

### Referencias

- cppreference – C standard library(https://en.cppreference.com/w/c)
- Listas enlazadas – GeeksForGeeks(https://www.geeksforgeeks.org/linked-list-data-structure/)
- Linked lists for absolute beginners – CodeVault(https://www.youtube.com/watch?v=uBZHMkpsTfg&list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl)
- The Linux Man-Pages Project. (s.f.). Write(2) — Linux programmer's manual.

### Uso de IA

Durante el desarrollo de este proyecto se utilizó IA como herramienta de apoyo para:

- Entender conceptos de C como la precedencia de operadores, el uso de dobles punteros y la gestión de memoria.
- Depurar el código propio identificando errores lógicos.
- Realizar este archivo README.md

En ningún caso se utilizó la IA para generar el código directamente. Toda la implementación fue escrita y razonada de forma propia.

