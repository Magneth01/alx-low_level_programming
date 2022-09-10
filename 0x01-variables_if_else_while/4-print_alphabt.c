#include <stdio.h>
/**
 * main - print lowercase except 'e' and 'q'
 *
 * Return: 0
 */
int main(void)
{
char lower;
for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower != 'a' && lower != 'q')
{
putchar(lower);
}
}
putchar('\n');
return (0);
}
