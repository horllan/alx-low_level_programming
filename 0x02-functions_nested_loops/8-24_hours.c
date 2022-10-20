#include "main.h"
/**
 * jack_bauer
 * Description: prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
int i = 0, j;

while (i <= 23)
{
j = 0;

while (j <= 59)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchr('\n');
j++;
}
i++;
}
}
