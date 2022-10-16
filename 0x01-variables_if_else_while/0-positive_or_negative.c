#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - program start execution here
 * This program detects if the generated number is positive or negative or zero
 * Return: always 0 for program success
 */
int main(void)

{

int n;



srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */
if (n == 0)
{
printf("%d\nis zero", n);
}
else if (n > 0)
{
	printf("%d\n is positive", n);
}
else
{

printf("%d\n is negative", n);
}

return (0);

}
