#include <stdlib.h>
#include <stdio.h>

/**
 * main - program start execution here
 * prints combinations of number numbers with no mirror
 * Return: always 0 for program success
 */

int main(void)
{
int i, j;

for (i = '0'; i < '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (i != '9')
{
putchar(',');
putchar(' ');
}
if (i > j)
{
	continue;
}
}
}
putchar('\n');
return (0);
}
