#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);

typedef struct comp
{
char *id;
int (*fn)(va_list list);
} comp;

int p_char(va_list list);
int p_str(va_list list);

#endif
