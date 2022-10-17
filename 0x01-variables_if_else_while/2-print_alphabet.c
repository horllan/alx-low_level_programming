#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program start execution here
 * prints small alphabets
 * Return: always 0 for program success
 */
int main(void)
{
int start;
for (start = 97; start <= 122; start++)
{
putchar(start);
}
putchar('\n');
return (0);

}
