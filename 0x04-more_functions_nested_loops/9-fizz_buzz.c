#include <stdio.h>
/**
*main - prints number to 100 but print
*or fizz or buzz or fizzBuzzim when divisible by 3, 5 and 15
*Return: returns 0
*/
int main(void)
{
int num = 0;
while (num++ < 100)
{
if ((num % 15 == 0))
printf("FizzBuzz ");

else if ((num % 3) == 0)
printf("Fizz ");
else if ((num % 5) == 0)
{
if (num != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", num);
}
printf("\n");
return (0);
}
