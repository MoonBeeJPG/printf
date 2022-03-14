#include "main.h"
/**
* p_bin - Print the binarian function
* @list: list
* Return: Number of characters printed
*/
int p_bin(va_list list)
{
	char *value;
	int var = 0, ch_c = 0, count = 0;
	int num = va_arg(list, int);
	
	if (num == 0)
	{
		_putchar(0);
		return (1);
	}
	num = var;

	while (var != 0)
	{
		while (var > 0)
		{
			var = var / 2;
			ch_c++;
		}
		var = num;
		value = malloc((sizeof(char) * ch_c) +1);
		if (!value)
		{
			while (var > 0)
			{
				value[count] = var % 2;
				ch_c++;
				var = var / 2;
			}
			while (count != 0)
			{
				count--;
				_putchar (value[count]);
			}
		}
		else 
			return (-1);
	}
	free(value);
	return (ch_c);
}
