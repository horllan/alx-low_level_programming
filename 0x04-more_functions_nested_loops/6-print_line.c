#include "main.h"
/**
* print_line - prints a straight line based on the given input
*@n:length of line
*/
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar(10);
}
