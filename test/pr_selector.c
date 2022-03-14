#include <stdlib.h>
#include "main.h"
/**
* pr_selector - selec the correct format to return to the .c
* @id: identifier character for comparing against %x module
* Return: The format select
*/
int (*pr_selector(char id))(va_list)
{
	comp array_f[] = {
		{"c", p_char},
		{"s", p_str},
		{"i", p_int},
		{"%", p_mod},
		{"\0", NULL}
	};

	int j = 0;

	

	for (j = 0; *array_f[j].id != '\0'; j++)
	{
		if (id == *array_f[j].id)
		{
			printf("%i", j);
			return (array_f[j].fn);
		}
	}
	_putchar('%');
	_putchar(id);
	return (p_unk);
}
