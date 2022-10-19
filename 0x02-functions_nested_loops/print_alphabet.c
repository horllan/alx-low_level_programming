#include "main.h"

/**
 * print_alphabet
 * Description: prints all alphabets in specific case
 * Return: 1 for success and 0 otherwise
 */

int print_alphabet(char c)
{
char i;

if (c == 'l' || c == 'L')
{
i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
}
else if ( c == 'u' || c == 'U')
{
i = 'A'

while (i <= 'Z')
{
_putchar(i);
i++;
}
}
return (1);
}
