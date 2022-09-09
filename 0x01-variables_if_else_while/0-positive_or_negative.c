#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - checking entry
 * Description : determining postive and negative numbers
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{
printf("%d is positive\n", n);
}
elseif (n==0)
{
printf("%d is zero\n", n);
}
elseif (n<0)
{
printf("%d is negative\n", n)
}
return (0);
}
