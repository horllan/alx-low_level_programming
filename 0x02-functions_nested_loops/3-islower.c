#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _islower - starting point
 * Description: checks if a character is in lowercase
 * @c: value to check
 * Return: 1 if c is lowercase otherwise return 0
 */

int _islower(int c)
{
if ( c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
