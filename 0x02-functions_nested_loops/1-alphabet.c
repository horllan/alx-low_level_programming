#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_alphabet - prints alphabets
 * Description: prints alphabet in lowercase
 *
 */
void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
}

/**
 * main - starting point
 * Description: begin the execution of program
 * Return: 0 for successful execution
 */

main(void)
{
print_alphabet();

return (0)
}
