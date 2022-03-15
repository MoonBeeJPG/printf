#include "main.h"
int _pwr(int,int);

/**
 * pr_int - print integer
 */
int p_int(va_list list)
{
	int num = va_arg(list, int);
	unsigned int i, i_cp;
	int cn = 0;
	int dgts = 0, n;
	

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


/**
 *  * _pwr - pwer
 *   * @a: a
 *    * @b: b
 *     */
int _pwr(int a, int b)
{
	    if (b == 0)
			        return (1);

		    else
				        return (_pwr(a, b - 1)) * a;
}
