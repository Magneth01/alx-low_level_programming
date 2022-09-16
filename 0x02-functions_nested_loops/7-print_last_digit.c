#include "main.h"
/**
 * print_last_digit - the function that print the last digit of a number
 * @n: the number in question
 *
 * Return: 0
 */
int print_last_digit(int)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		_putchar(last_digit * -1)
	}
	_putchar(lastdigit + '0');
	return (last_digit);
}
