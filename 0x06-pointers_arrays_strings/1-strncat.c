#include "main.h"

/**
 *_strcat - concatenates  the string from src with dest with s specified size
 *@dest: string to append value
 *@src: string to add
 *@n: number of character to concatenate
 * Return: returns the dest which is a pointer to char
 */

char *_strcat(char *dest, char *src, int n)
{

int i = 0,  len = 0;

while (dest[i++])
len++;
for (i = 0; src[i] && i < n; i++)
dest[len++] = src[i];

return (dest);
}
