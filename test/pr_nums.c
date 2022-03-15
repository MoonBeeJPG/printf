#include "main.h"
/**
 * pr_int - Print a integer number
 * @list: list
 * Return: Number the characters printed
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
/**
* p_bin - Print the binarian function
* @list: list
* Return: Number of characters printed
*/
int p_bin(va_list list)
{
    char *value;
    int var = 0, ch_c = 0, count = 0;
    unsigned int num = va_arg(list, int);

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
        value = malloc((sizeof(char) * ch_c) +1);
        if (!value)
        {
            while (var > 0)
            {
                value[count] = ((var % 2) + 48);
                ch_c++;
                var = var / 2;
            }
            while (count != 0)
            {
                count--;
                _putchar (value[count]);
            }
        }
        else
            return (-1);
    }
    free(value);
    return (ch_c);
}

