#include "main.h"
/**
* p_char - Print the char function
* @list: list
* Return: Number of characters printed
*/
int p_char(va_list list)
{
	int ch_c = 0;
	char ch = va_arg(list, int);

	_putchar(ch);
	ch_c++;

	return (ch_c);
}
/**
* p_str - Print the string function
* @list: list
* Return: Number of characters printed
*/
int p_str(va_list list)
{
	int c = 0;
	int ch_c = 0;

	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	if (str)
	{
		for (c = 0; str[c] != '\0'; c++)
		{
			ch_c++;
			_putchar(str[c]);
		}
	}
	return (ch_c);
}
/**
* p_mod - Print % as identifier
* @list: list
* Return: Number of characters printed
*/
int p_mod(va_list list)
{
	int ch_c = 0;
	(void)list;

	_putchar('%');
	ch_c++;

	return (ch_c);
}
/**
* p_unk - Print unknowns identifiers
* @list: list
* Return: Number of characters printed
*/
int p_unk(va_list list)
{
	int ch_c = 0;
	(void)list;

	ch_c++;
	ch_c++;

	return (ch_c);
}
/**
* p_bin - print the binary
* @list: list
* Return: Number of printed characters
*/
int p_bin(va_list list)
{
	char *value;
	unsigned int var;
	unsigned int num = va_arg(list, int);
	int ch_c = 0, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	var = num;
	if (var != 0)
	{
		while (var > 0)
		{
			var = var / 2;
		}
		var = num;
		value = malloc(sizeof(char) * ch_c);
		if (value)
		{
			while (var > 0)
			{
				value[count] = ((var % 2) + '0');
				var = var / 2;
				count++;
			}
			count--;
			while (count >= 0)
			{
				ch_c++;
				_putchar(value[count]);
				count--;
			}
		}
		else
			return (-1);
	}
	free(value);
	return (ch_c);
}
