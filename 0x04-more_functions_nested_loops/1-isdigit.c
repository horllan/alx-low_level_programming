#include "main.h"

/**
 * _isdigit - starting point
 * Description: checks if a parameter is digit
 * @c: value to check
 * Return: 1 if c is lowercase otherwise return 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
