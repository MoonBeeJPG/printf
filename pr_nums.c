#include "main.h"
/**
* p_int - print integer
* @list: list
* Return: count
*/
int p_int(va_list list)
{
	unsigned int i, i_cp;
	int dgts = 0, n, cn = 0, num = va_arg(list, int);

	if (num < 0)
	{
		_putchar('-');
		cn++;
		i = (unsigned int) (0 - num);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
		i = (unsigned int)num;

	i_cp = i;

	while (i_cp != 0)
	{
		i_cp /= 10;
		dgts++;
	}

	dgts--;

	for (; dgts > 0; dgts--)
	{
		n = i / _pwr(10, dgts);
		_putchar (n + '0');
		cn++;
		i = i % _pwr(10, dgts);
	}

	_putchar((i % 10) + '0');
	cn++;

	return (cn);
}


/**
* _pwr - pwer
* @a: a
* @b: b
* Return: result
*/
int _pwr(int a, int b)
{
	if (b == 0)
		return (1);

	else
		return ((_pwr(a, b - 1)) * a);
}

/**
* p_bin - Print a integer number
* @list: list
* Return: Number the characters printed
*/
int p_bin(va_list list)
{
	char *value;
	unsigned int var = 0, num = va_arg(list, int);
	int ch_c = 0, count = 0;

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
		value = malloc((sizeof(char) * ch_c) + 1);
		if (!value)
		{
			while (var > 0)
			{
				value[count] = ((var % 2) + 48), ch_c++;
				var = var / 2;
			}
			while (count != 0)
			{
				count--;
				_putchar(value[count]);
			}
		}
		else
			return (-1);
	}
	free(value);
	return (ch_c);
}

/**
* p_uns - Print octagonal characters
* @list: list
* Return: Number of characters printed
*/
int p_uns(va_list list)
{
	unsigned int i_cp;
	int dgts = 0, n, cn = 0;
	unsigned int i = (unsigned int)va_arg(list, long int);

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	i_cp = i;

	while (i_cp != 0)
	{
		i_cp /= 10;
		dgts++;
	}

	dgts--;

	for (; dgts > 0; dgts--)
	{
		n = i / _pwr(10, dgts);
		_putchar (n + '0');
		cn++;
		i = i % _pwr(10, dgts);
	}

	_putchar((i % 10) + '0');
	cn++;

	return (cn);
}

/**
* p_oct - Print the octogonal character
* @list: list
* Return: Number of characters printed
*/
int p_oct(va_list list)
{
	(void)list; /*TESTING!!! REMOVE TO DEPLOY FUNCTION*/
	return (0);
}
