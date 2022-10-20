#include "main.h"

/**
 * print_alphabet_x10 - starting point
 */

void print_alphabet_x10(void)
{
int i;
int c = 'a';
for (i = 1; i <= 10; i++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
}
_putchar('\n');
}
