include "main.h"
/**
* p_char - Print the char function
* @list: list
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
* @list: list
* Return: Number of characters printed
*/
int p_str(va_list list)
{
    int c = 0;
    int ch_c = 0;

    char *str = va_arg(list, char *);

    if (str == NULL)
        str = "(null)";
    if (str)
    {
        for (c = 0; str[c] != '\0'; c++)
        {
            ch_c++;
            _putchar(str[c]);
        }
    }
    return (ch_c);
}
/**
* p_int - Print the integral function
* @list: list
* Return: Number of characters printed
*/
int p_int(va_list list)
{
    int i = 0, ch_c = 0;
    int num = va_arg(list, int);

    char *str = itos(num);

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
        ch_c++;
    }

    return (ch_c);
}
/**
 * p_mod - Print % as identifier
 * @list: list
 * Return: Number of characters printed
 */
int p_mod(va_list list)
{
    int ch_c = 0;
    (void)list;

    _putchar('%');
    ch_c++;

    return (ch_c);
}
/**
* p_unk - Print unknowns identifiers
* @list: list
* Return: Number of characters printed
*/
int p_unk(va_list list)
{
    int ch_c = 0;
    (void)list;

    ch_c++;
    ch_c++;

    return (ch_c);
}
