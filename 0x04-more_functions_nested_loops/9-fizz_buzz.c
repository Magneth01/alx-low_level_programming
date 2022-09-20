#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 * followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples of five print Buzz.
 *
 */

int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");
else if ((num % 3) == 0)
rintf("Fizz");
else if ((num % 5) == 0)
printf("Buzz");
else
printf("%d", num);
if (num == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
