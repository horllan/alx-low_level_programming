#include <stdlib.h>
#include <stdio.h>

/**
 * main - program start execution here
 * This program that prints hexadecimal number
 * Return: always 0 for program success
 */
int main(void)

{

char hex;
int num;

for (num = 0; num <=  9; num++)
{
putchar(num + '0');
}
for (hex = 97; hex <= 102; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);

}
