#include "main.h"
/**
 * _islower - determine the case of a letter
 * @c is the argument of the function _islower
 *
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
