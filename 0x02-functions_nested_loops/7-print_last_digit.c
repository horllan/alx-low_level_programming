#include "main.h"

/**
 * print_last_digit
 * Description: this function prints the last digit of a number passed in as argument
 * @n: number passed in
 * Return: always return 0;
 */

int print_last_digit(int n)
{
int last = n % 10;
if (n < 0)
{
last *= -1;
}
_putchar(last + '0');
return (last);
}
