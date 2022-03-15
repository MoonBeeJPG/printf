#include <stdio.h>
#include "main.h"

/**
 * pr_int_rec
 */
int p_int(int i)
{
	int cn = 0;
	
	while (i != 0)
	{
		i /= 10;
		cn++;
	}

	pr_int_rec(i);

	return (cn);
}
