#include "main.h"
#include <limits.h>

int main(void)
{
	long int cn = 0;

	cn = p_int(23455);
	printf("\n%i\n", cn);
	cn = p_int(-23455);
	printf("\n%i\n", cn);
	cn = p_int(INT_MAX);
	printf("\n%i\n", INT_MAX);
	printf("Power 5, 2: %i", _pwr(5, 2));
	return (0);
}
