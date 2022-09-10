#include <stdio.h>
/**
 * main - print number combi
 *
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if putchar(num == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
