#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - program start execution here
 * This program that prints hexadecimal number
 * Return: always 0 for program success
 */
int main(void)

{

	int small, cap;
	
	for (small=	'0' ; small <=' 9' ; small++)
	{
		putchar(small);
	}
	for (cap = '97'; cap <= '102'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);

}
