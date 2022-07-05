#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

int ft_printf(const char *format, ...);
size_t ft_putchar(int c);
size_t ft_putstr(char *s);
size_t format_check(va_list argptr, char c);
size_t	ptr_handler(uintptr_t addr);
size_t nb_handler(int nb);
size_t unsigned_handler(unsigned int nb);
size_t hex_handler(unsigned int nb, int is_upper);

#endif