#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * @n: is the number
 * Return: 0
 */
void print_most_numbers(void)
{
int n;

for (n = 48; n < 58; n++)
{
if (n != 2 || n != 4)
{
_putchar(n);
}
}
_putchar(10);
}
