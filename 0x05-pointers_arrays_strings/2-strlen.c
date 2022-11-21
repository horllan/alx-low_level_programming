#include "main.h"

/**
 * _strlen- return the length of a string
 * @s: string to check
 * Return: 1 always for success
 */

int(char *s)
{
int i = 0;
while (s[i] != '\0')
{
++i;
}
return i;
}
