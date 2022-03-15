#include "main.h"

/**
 * pr_int_rec
 */
int p_int(va_list list)
{
	int i = va_arg(list, int);
	int cn = 0;
	int dgts = 0, n, i_cp = i;

	if (i < 0)
	{
		_putchar('-');
		cn++;
		i = 0 - i;
	}
	else if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	while (i_cp != 0)
	{
		i_cp /= 10;
		dgts++;
	}

	dgts--;


	for(; dgts > 0; dgts--)
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
