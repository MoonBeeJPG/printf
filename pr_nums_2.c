#include "main.h"

/**
* p_hex - print formatted in hex (lowercase)
* @list: list
* Return: Number of printed characters
*/
int p_hex(va_list list)
{
	char *value;
	unsigned int var, num = va_arg(list, int);
	int ch_c = 0, count = 0, x = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	var = num;
	if (var != 0)
	{
		for (; var > 0; count++)
			var = var / 16;

		var = num;
		value = malloc(sizeof(char) * count);
		if (!value)
			return (-1);

		for (count = 0; var > 0; count++, var /= 16)
		{
			x = var % 16;
			if (x > 9)
				value[count] = ((x - 10) + 'a');

			else
				value[count] = ((var % 16) + '0');
		}
		count--;

		for (; count >= 0; count--)
		{
			ch_c++;
			_putchar(value[count]);
		}
	}
	free(value);
	return (ch_c);
}

/**
* p_HEX - print formatted in HEX (Uppercase)
* @list: list
* Return: Number of printed characters
*/
int p_HEX(va_list list)
{
	char *value;
	unsigned int var, num = va_arg(list, int);
	int ch_c = 0, count = 0, x = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	var = num;
	if (var != 0)
	{
		for (; var > 0; count++)
			var = var / 16;

		var = num;
		value = malloc(sizeof(char) * count);
		if (!value)
			return (-1);

		for (count = 0; var > 0; count++, var /= 16)
		{
			x = var % 16;
			if (x > 9)
				value[count] = ((x - 10) + 'A');

			else
				value[count] = ((var % 16) + '0');
		}
		count--;

		for (; count >= 0; count--)
		{
			ch_c++;
			_putchar(value[count]);
		}
	}
	free(value);
	return (ch_c);
}
