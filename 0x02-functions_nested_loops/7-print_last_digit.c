#include "main.h"

/**
 * print_last_digit last digit printer
 * Description: this function prints the last digit of a number wit sign
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
