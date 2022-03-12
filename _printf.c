#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
* _printf - function that produces output according to a format
* @format: character string
* Return: number of characters printed
*
* comp: structure for stroing comparator and functions
* id: identifier charater for comparing agnst %x
* fn: functions pointers
*/
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	int ch_c = 0;
	va_list list;

	comp array_f[] = {
		{"c", p_char},
		{"s", p_str},
		{"\0", NULL}
	};

	va_start(list, format);
	
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{	
		if (format[i] == '%')
		{
			for (j = 0; *array_f[j].id != '\0'; j++)
			{		
				if (format[i + 1] == *array_f[j].id)
				{
					ch_c += array_f[j].fn(list);
					i++;
				 /* problematico con %xx */
				}
			}
		}

		else
		{
			ch_c++;
			_putchar(format[i]);
			_putchar('.');
		}
	}

	va_end(list);
	return (ch_c);
}	

int p_char(va_list list)
{
	int ch_c = 0;

	char ch = (va_arg(list, int));
	_putchar(ch);
	ch_c++;
	_putchar('.');
		
	return (ch_c);
}

int p_str(va_list list) 
{
	int c = 0;
	int ch_c = 0;

	char *str = va_arg(list, char *);

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
		_putchar('.');
		ch_c++;
	}

	return (ch_c);
}
