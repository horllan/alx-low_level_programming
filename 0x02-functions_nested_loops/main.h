#ifndef main_h
#define main_h

/**
 *_abs - converts to absolute value
 * Return: 1 for success
 */

int abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else return (n);
}

/**
 * print_alphabet
 * Return: 1 for success and 0 otherwise
 */
int print_alphabet()
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
}
int _islower(int c)
{
if (c >= 'a' && c  >= 'z')
{
return (1);
}
else return (0);
}
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
return (0);

}
#endif
