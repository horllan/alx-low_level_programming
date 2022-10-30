#include "main.h"

/**
 *_strcat - concatenates  the string from src with dest
 *@dest: string to append value
 *@src: string to add
 *
 * Return: returns the dest which is a pointer to char
 */

char *_strcat(char *dest, char *src)
{

int i = 0,  len = 0;

while (dest[i++])
len++;
for (i = 0; src[i]; i++)
dest[len++] = src[i];

return (dest);
}
