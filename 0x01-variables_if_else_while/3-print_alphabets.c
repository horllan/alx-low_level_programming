#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program start execution here
 * This program that prints alphabets in small and capital letter
 * Return: always 0 for program success
 */
int main(void)
{
int small, cap;

for (small = 97 ; small <= 122 ; small++)
{
putchar(small);
}
for (cap = 65; cap < 91; cap++)
{
putchar(cap);
}
putchar('\n');
return (0);

}
