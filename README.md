*This project has been created as part of the 42 curriculum by **oazlan**.*

## DESCRIPTION

`ft_printf` is a reimplementation of the C standard library function `printf`.  
The goal of this project is to deepen understanding of variadic functions, parsing, formatting, and low-level output in C.

The library reproduces the core behavior of `printf`, supporting a subset of its format specifiers and flags. It converts and prints data of different types (characters, strings, integers, hexadecimal values, pointers, etc.) according to a format string, while returning the number of printed characters.

Through this project, I practiced:
- Handling variadic arguments with `stdarg.h`
- Parsing format strings
- Implementing number-to-string conversions
- Managing memory and edge cases precisely
- Writing modular, reusable C code

## INSTRUCTIONS

### *Compilation*

To compile the library:

```bash
make
```
This will generate `libftprintf.a`.

### *Usage*
Include the header in your project:
```c
#include "ft_printf.h"
```
Compile your program with the library:
```bash
gcc main.c libftprintf.a -I include
```

### *Example*
```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```
```output
output:
Hello world, number: 42
```
The function behaves similarly to printf, returning the number of characters printed.

### *Cleaning*
```bash
make clean    # removes object files
make fclean   # removes object files and libftprintf.a
make re       # full rebuild
```

## RESOURCES

- `man 3 printf` – Official documentation of printf\n
- `man stdarg` – Variadic arguments in C
- [42 Gitbook (ft_printf)](https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)
- 42 peers

### *Use of AI*
Making this README :)























