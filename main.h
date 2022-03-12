#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);

typedef struct comp
{
char id;
void (*fn)(va_list list);
}

void p_char(va_list list);
void p_str(va_list list);

#endif
