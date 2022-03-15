#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct comp - structure for the arguments and functions
 * @id: All the arguments
 * @fn: Pointers to all the functions
 */
typedef struct comp
{
char *id;
int (*fn)(va_list list);
} comp;

int (*pr_selector(char))(va_list);
int p_char(va_list list);
int p_str(va_list list);
int p_int(va_list list);
int p_mod(va_list list);
int p_unk(va_list list);
int p_uns(va_list list);
int p_oct(va_list list);
int p_bin(va_list list);
int p_rot(va_list list);
int p_hex(va_list list);
int _pwr(int, int);
#endif
