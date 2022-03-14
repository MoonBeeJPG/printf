/**#include "main.h"
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
	digits++;
	}

	n_str = malloc((digits + 1) * sizeof(char));

	for (rem = num; rem != 0; rem /= 10)
	{
		next_d = rem % 10;
		n_str[1] = (next_d + '0');
	}


	return (rev_str(n_str));
}
/**
 * rev_str - reverses string (null char at the end)
 * @str: string to be reversed
 * Return: pointer to reversed string
 */
char *rev_str(char *str)
{
	int i, j = 0;
	char *dest;

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
