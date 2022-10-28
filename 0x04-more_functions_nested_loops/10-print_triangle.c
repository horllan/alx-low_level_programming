#include <stdlib.h>
#include <stdio.h>
/**
 *print_triangle - prints triangle to the desired size
 *@size: size of triangle
 */

void print_triangle(int size)
{
if (size > 0)
{
int i, j;
i = size;

for (i = size; i > 0; i--)
{
putchar(' ');
}
for (j = 0; j < i; j++)
{
putchar('#');
}
putchar(10);
}
else
putchar(10);
}
