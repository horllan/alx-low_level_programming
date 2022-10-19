#include "main.h"

/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{
char s[] = "_putchar\n";
int i = 0;

while (s[i] != '\n')
{
_putchar(s[i]);
i++;
}

return (0);
}
