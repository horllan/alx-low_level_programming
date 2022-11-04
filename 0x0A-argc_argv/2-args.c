#include <stdio.h>
#include <stdio.h>

/**
 * main - this program just print all the arguments passed in
 * @argc: argument count
 * @argv: argument variable array whichvis same size as argc
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
int i = 0;


while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
