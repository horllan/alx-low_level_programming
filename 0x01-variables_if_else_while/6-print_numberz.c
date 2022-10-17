#include <stdlib.h>
#include <stdio.h>

/**
 * main - program start execution here
 prints numbers in base 10
 * Return: always 0 for program success
 */
int main(void)
{
int start;
for (start = 0; start <= 9; start++)
{
putchar(start + '0');
}
putchar('\n');
return (0);

}
