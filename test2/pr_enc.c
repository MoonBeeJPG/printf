#include "main.h"
/**
* p_rot - print rot 13
* @list: list
* Return: Number of characters printed
*/
int p_rot(va_list list)
{
    char *value;
    int i = 0;
    int ch_c = 0;

    value = va_arg(list, char *);

    if (value == NULL)
        return (-1);
    if (value[i] != '\0')
    {
        if ((value[i] >= 'a' && value[i] <= 'z') ||
            (value[i] >= 'A' && value[i] <= 'Z'))
        {
            if ((value[i] >= 'n' && value[i] <= 'z') ||
                (value[i] >= 'N' && value[i] <= 'Z'))
            {
                ch_c = ch_c + _putchar(value[i] - 13);
            }
            else
            {
                ch_c = ch_c + _putchar(value[i] + 13);
            }
        }
        else
        {
            ch_c = ch_c + _putchar(value[i]);
        }
        i++;
    }
    return (ch_c);
}
