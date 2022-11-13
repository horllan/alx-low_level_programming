
#include <stdlib.h>
#include <stdio.h>

/**
 * main - this program just print all the arguments passed in
 * @argc: argument count
 * @argv: argument variable array which is same size as argc
 * Return: 0 for success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
