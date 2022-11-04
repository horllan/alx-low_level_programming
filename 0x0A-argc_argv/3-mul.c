#include <stdlib.h>
#include <stdio.h>

/**
 * main - this program just print the multiplication 
 * of the two arhuments passed in
 * @argc: argument count
 * @argv: argument variable array whichvis same size as argc
 * Return: 0 for success
 */

int main(int argc, const char *argv[])
{
if (argc >2)
{
int f = atoi(argv[1]);
int l = atoi(argv[2]);
int res = f * l;
printf("%d\n", res);
}
return (0);
}
