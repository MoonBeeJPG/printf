#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "main.h"
#define RED printf("\033[0;31m");
#define BLUE printf("\033[0;34m");
#define GREEN printf("\033[0;32m");
#define RESET printf("\033[0m");
/**
 * output - check expected and obtained code.
 * @_printf: print
 * Return: 0 for success, 1 for error.
 */
int output(int a, int b)
{
	printf("\n");
	if (a == b)
	{
		GREEN;
		printf("Success: %d chars printed.", a);
		RESET;
		return (0);
	}
	RED;
	printf("Error: expected %d, obtained %d.", a, b);
	RESET;
	return (1);
}
/**
 * main - test collection for _printf.
 * @_printf: print
 * Return: nothing
 */
int main(void)
{

	int a, b, cont = 0;
	printf("Test 30");
	printf("\nexpected: ");
	a = printf("%i %i", 34, 3);
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("%i %i", 30, 33);
	cont = cont + output(a,b);
	printf("\n===============\n");
	if (cont == 0)
	{
		GREEN;
		printf ("\n\n1 CASES CHECKED, 0 ERRORS.\n\n");
		RESET;
	}
	else
	{
		RED;
		printf ("\n\n1 CASES CHECKED, %d ERRORS.\n\n", cont);
		RESET;
	}
	return (cont);
	return (0);	
}
