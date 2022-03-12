#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
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
	int i = 0;
	int ch_c = 0;
	va_list list;
	int (*pr_fn_sel)(va_list);

	va_start(list, format);
	
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			pr_fn_sel = pr_selector(format[i + 1]);
			ch_c += pr_fn_sel(list);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			ch_c++;
		}
	}
	va_end(list);
	printf("%d", ch_c);
	return (ch_c);
}
