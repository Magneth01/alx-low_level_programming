#include "main.h"
/**
 * _abs - is the function that computes the absolute value of an integer
 * @c: is the argument of the function
 *
 * Return: 0
 */
int _abs(int c)
{
	if ((c > 0) || (c == 0))
	{
		return (c);
	}
	else
		return (c * -1);
}
