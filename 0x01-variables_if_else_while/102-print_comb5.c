#include <stdio.h>
#include <stdlib.h>

/**
 * main- starting point for program execution
 * aim- to write a program that will print all possible combination
 * of two two-digit numbers
 * return- always return 0 for successful program execution
 */

int main(void)
{
int a, b, c, d;

for (a = 0; a <= 99; a++)
{
for (b = 0; b <= 99; b++)
{
putchar(a);
putchar(b);
for (c = 0; c <= 99; c++)
{
for (d = 0; d <= 99; d++)
{
putchar(c + '0');
putchar(d + '0');
}
}
putchar(',');
putchar(' ');
}
}
return (0);
}
