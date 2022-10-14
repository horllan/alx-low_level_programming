
#include <stdio.h>
/**
 * main - program execution starts here
 *task prints the size of the data type based on the machine
 * Return: Return zero for program success
  */
int main(void)
{
	printf("Size of a char: %d  byte(s)\n", sizeof(char));
		printf("Size of an int: %d byte(s)\n", sizeof(int));
			printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
				printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
				printf("Size of a float: %d byte(s)\n", sizeof(float));
						return (0);
}
