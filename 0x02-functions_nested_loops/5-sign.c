#include "main.h"

/**
 * print_sign - starting point
 * Description: prints the sign of a number
 * @n: value to check
 * Return: 1 if n is positive; 0 if n is zero otherwise return 0
 */

int print_sign(int n)
{
if (n < 0)
{
_puthcar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
