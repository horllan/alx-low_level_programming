#include "main.h"

/**
 * _puts_recursion - puts char function using recursion
 * @s: input char
 */


void _puts_recursion(char *s)
{

if (*s  == '\0')
_putchar(10);
else
_putchar(s[0]);
_puts_recursion(s + 1);

}
