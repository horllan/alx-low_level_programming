#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * Description: prints from any given number to 98
 * @n: given number starting point
 */

void print_to_98(int n)
{
if ( n < 98)
{
while (n <= 98)
{
if (n == 98)
{
printf("%d\n, ", n);
}
printf("%d, ", n);
n++;
}
}

if (n >= 98)
{
while (n >= 98)
{
if (n ==98)
{
printf("%d\n, ", n);
}
printf("%d, " n);
n--;
}
}
}
