#include "main.h"

/**
 * print_numbers - print numbers
 * Description: prints all digit from 0 to 9
 */

void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
_putchar(i + '0');
}
_putchar('\n');
}
