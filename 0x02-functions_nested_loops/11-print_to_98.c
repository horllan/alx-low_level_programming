#include "main.h"

/**
 * print_to_98 - prints to 98
 * Description: prints from any given number to 98
 * @n: given number starting point
 */

void print_to_98(int n)
{
while (n < 98)
{
_putchar(n + '0');

n++
}

while (n > 98)
{
_putchar(n + '0');
n--;
}
_putchar(n + '0');
_putchar('\n');
}

