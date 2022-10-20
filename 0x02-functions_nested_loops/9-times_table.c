#include "main.h"

/**
 * times_table
 * Description: prints 9 times table
 */

void times_table(void)
{
int row, column, times;

row = 0;
while (row <= 10)
{
column = 0;
while (column <= 10)	
{
if (row == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar('\n');
column++;
}
times = column * row;
_putchar(times + '0');
_putchar(',');
_putchar(' ');
_putchar('\n');
column++;
}
row++;
}
}
