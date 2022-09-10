#include <stdio.h>
/**
 * main - print uppercase and lowercase
 *
 * Return: 0
 */
int main(void)
{
char lower;
char upper;
for (lower = 'a'; lower <= 'z'; lower++);
{
putchar(lower);
}
putchar('\n')
for (upper = 'A'; upper <= 'Z'; upper++);
{
putchar(upper);;
}
return (0);
}
