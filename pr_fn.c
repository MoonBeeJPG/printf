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
<<<<<<< HEAD
* p_int - Print the integral function
* Return: Number of characters printed
*/
int p_int(va_list list)
=======
* p_dec - Print the decimal function
* Return: Number of characters printed
*/
int p_int(va_list list)
{
    int ch_c = 0;
    int num = va_arg(list, int);	

	str = itoc(num);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
    	ch_c++;
	}

    return (ch_c);

/* ------- UTILITIES ------ */

/**
 * itos - Converts int to string
 * @num: number to convert to string
 *
 * Return: pointer to number string
 */
char *itos(int num)
{
	int digits, num_cp = num, rem, next_d;
	char *n_str;

	/*count digits*/
	while (num_cp > 0)
	{
	num_cp /= 10;
	digits++
	}

	n_str = malloc((digits + 1) * sizeof(char));

	for (rem = num; rem != 0; rem /= 10)
	{
		next_d = rem % 10;
		n_str[] = (next_d + '0');
	}


	return(rev_str(n_str));
}

/**
 * rev - reverses string (null char at the end)
 * @s: string to be reversed
 *
 * Return: pointer to reversed string
 */
char *rev_str(char *str)
>>>>>>> 95dceea69f9dfb848450e80c613aac9ed77e4a5a
{
	int i, j = 0;
	char *dest;
	char *str;

	while (str[j] != '\0')
	{
		j++;
	}

	dest = malloc(j * sizeof(char));
	if (dest == NULL)
		return (NULL);

	j--;

	for (i = 0; str[i] != '\0'; i++, j--)
	{
		dest[i] = str[j];
	}
	dest[i] = '\0';
	return (dest);
}
