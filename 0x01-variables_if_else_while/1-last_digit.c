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

int n;



srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */
if (n % 10 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n%10);
}
else if (n % 10 > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n,n%10);
}
else if (n % 10 < 6)
{

	printf("Last digit of %d is %d and is less than 6 and not 0\n",n);
}

return (0);

}
