#include "main.h"

/**
* p_hex - print formatted in hex (lowercase)
* @list: list
* Return: Number of printed characters
*/
int p_hex(va_list list)
{
    char *value;
    unsigned int var, num = va_arg(list, int);
    int ch_c = 0, count = 0;

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }
    var = num;
    if (var != 0)
    {
        while (var > 0)
        {
            var = var / 16;
			count++;
        }

        var = num;
        value = malloc(sizeof(char) * count);
        if (value)
        {
			count = 0;

            while (var > 0)
            {
				if (value[count] > 9)
                	value[count] = ((var % 16) - 10 + 'a');

				else
                	value[count] = ((var % 16) + '0');

                var = var / 16;
				count++;
            }

			count--;
 
			while (count >= 0)
            {
                ch_c++;
                _putchar(value[count]);
                count--;
            }
        }
        else
            return (-1);
    }

    free(value);
	return (ch_c);
}
