#include <stdio.h>
#include "main.h"

/**
 * pr_int_rec
 */
int pr_int_rec(int i)
{
	int cn = 0;

	if (i != 0)
	{
		return (pr_int_rec(i / 10));
	}

	_putchar((i % 10) + '0');

	return (1);
}
