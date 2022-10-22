#include "main.h"
/**
*print_square - prints squares whose size equals arg
*@s: parameter
*Return:returns nothing
*/
void print_square(int s)
{
int s1, s2;

if (s > 0)
{
for (s1 = 0; s1 < s; s1++)
{
for (s2 = 0; s2 < (s - 1); s2++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
