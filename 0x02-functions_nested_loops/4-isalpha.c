#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - starting point
 * Description: checks if a input is alphabet
 * @c: value to check
 * Return: 1 if c is alphabet otherwise return 0
 */

int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
