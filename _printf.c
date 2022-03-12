#include "main.h"
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
	va_list list;

	comp array_f[] = {
		{"c", p_char},
		{"s", p_str},
		{"\0", NULL}
	};

	va_start(list, format);
	
	for (i = 0; format[i] != '\0'; i++)
	{	
		if (format[i] == '%')
		{
			for (j = 0; *array_f[j].id != '\0'; j++)
			{		
				if (format[i + 1] == *array_f[j].id)
				{
					*array_f[j].fn(list);
				}
			}
		}
		else
			_putchar(format[i]);
	}

	va_end(list);
	return (0);
}	

void p_char(va_list list) /* complete?? */
{
	_putchar(va_arg(list, int));
}

void p_str(va_list list) 
{
	int c = 0;

	char *str = va_arg(list, char *);

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(c);
	}
}
