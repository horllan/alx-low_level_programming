#include <stdlib.h>
#include <stdio.h>

/**
 * main - this program just print the addition
 * of the two arhuments passed in
 * @argc: argument count
 * @argv: argument variable array whichvis same size as argc
 * Return: 0 for success
 */

int main(int argc, const char *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error");
return (1);
}
}
if (argc < 2)
{
sum =0;
return (0);
}
sum += atoi(argv[i]);
}
printf("%d", sum);
}
