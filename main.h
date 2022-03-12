#ifndef MAIN_H
#define MAIN_H
#include "_putchar.c"
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);

typedef struct comp
{
char id;
void (*fn)(va_list list);
}

void p_char(va_list list);
void p_str(va_list list);

#endif
