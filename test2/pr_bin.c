#include "main.h"
/**
 * pr_bin - Print a integer number
 * @list: list
 * Return: Number the characters printed
 */
int p_bin(va_list list)
{
    char *value;
    unsigned int var = 0;
	int ch_c = 0, count = 0;
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
                _putchar(value[count]);
            }
        }
        else
            return (-1);
    }
    free(value);
    return (ch_c);
}

