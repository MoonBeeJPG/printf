#include "main.h"
/**
* p_char - Print the char function
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
* Return: Number of characters printed
*/
int p_str(va_list list) 
{
	int c = 0;
	int ch_c = 0;

	char *str = va_arg(list, char *);

	for (c = 0; str[c] != '\0'; c++)
	{
		ch_c++;
		_putchar(str[c]);
	}
	return (ch_c);
}
/**
* p_int - Print the integral function
* Return: Number of characters printed
*/
int p_int(va_list list)
{
    int ch_c = 0;

    char intg = va_arg(list, int);
    _putchar(intg);
    ch_c++;

    return (ch_c);
}
