#include "main.h"
/**
* pr_selector - selec the correct format to return to the .c
* @id: identifier character for comparing against %x module 
*/
int (*pr_selector(char *id)(va_list)
{
	comp array_f[] = {
        {"c", p_char},
        {"s", p_str},
        {"\0", NULL}
    };
	
	for (j = 0; *array_f[j].id != '\0'; j++)
			{
				if (format[i + 1] == *array_f[j].id)
				{
					ch_c += array_f[j].fn(list);
					i++;
				}
			}
	return (ch_c);
}
