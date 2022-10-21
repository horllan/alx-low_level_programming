#include "main.h"

/**
 * _upper - starting point
 * Description: checks if a character is in uppercase
 * @c: value to check
 * Return: 1 if c is lowercase otherwise return 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
