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
	
	comp array_f[] = {
		{"c", p_char},
		{"s", p_str},
		{"\0", NULL}
	};

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
	}
}	

void p_char(va_list list); /* complete?? */
{
	_putchar(va_arg(list, char));
}

void p_str(va_list list) 
{
	int c = 0;

	char *str = va_args(list, char);

	for (c = 0; str[c] != '\0'; i++)
	{
		_putchar(c)
	}
}
