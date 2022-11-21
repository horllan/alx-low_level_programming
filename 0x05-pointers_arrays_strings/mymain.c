#include <stdio.h>
#include"main.h"
/**
 * main -  Copies the content of *src to *dest including the '0\'
 * Return: pointer to the destination
 */


int main(void)
{
char* greet = "hello";
char* mention;

_strcpy(mention, greet);
printf("%s", mention);
return (0);
}
