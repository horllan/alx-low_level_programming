#include <stdlib.h>
#include <stdio.h>

/**
 * main - program start execution here
 * prints small alphabets in reverse
 * Return: always 0 for program success
 */
int main(void)

{
int start;

for (start = 122; start >= 97; start--)
{
	putchar(start);
}
putchar('\n');

return (0);

}
