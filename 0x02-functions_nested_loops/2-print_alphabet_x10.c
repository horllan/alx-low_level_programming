#include "main.h"

/**
 * print_alphabet_x10 - starting point
 */

void print_alphabet_x10(void)
{
int i;
char c;
for (i = 1; i <= 10; i++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
