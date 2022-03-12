#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);

typedef struct type
{
char id;
void (*fn)(va_list list);
} structure;

void fchar(va_list list);
void fstring(va_list list);
#endif
