#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a line
 * @n: is the number to count from
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 0)
	{
		while (n > 0)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
			printf("%d\n", n);
		}
}
