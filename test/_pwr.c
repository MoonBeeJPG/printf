#include "main.h"

int _pwr(int a, int b)
{
	int n;
	int x = a;

	for (n = 1; n < b ; n++)
	{
		x = x * a;
	}
	return (x);
}
