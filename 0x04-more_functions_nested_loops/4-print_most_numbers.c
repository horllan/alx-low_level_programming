#include "main.h"

/**
 * print_numbers - print numbers
 * Description: prints all digit from 0 to 9
 */

void print_numbers(void)
{
int i = 0;

for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
{
continue;
}
_putchar(i + '0');
}
_putchar('\n');
}
