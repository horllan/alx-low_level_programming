#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - program start execution here
 * prints numbers from 0 to 9
 * Return: always 0 for program success
 */
int main(void)

{
int i;

for (i = 0; i <= 9; i++)
{
printf("%d", i);
}
putchar('\n');
return (0);

}
