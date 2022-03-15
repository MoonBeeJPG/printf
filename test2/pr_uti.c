#include "main.h"

/**
* _pwr - pwer
* @a: a
* @b: b
* Return: result
*/
int _pwr(int a, int b)
{
    if (b == 0)
        return (1);

    else
        return ((_pwr(a, b - 1)) * a);
}
