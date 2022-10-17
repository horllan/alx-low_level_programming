#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - program start execution here
 * This program detects the last digit of generated number
 * Return: always 0 for program success
 */
int main(void)

{

int start = 97;
int end = 122;
for(start ; start <= end ; start++)
{
	putchar(start);
}
putchar('\n');

return (0);

}
