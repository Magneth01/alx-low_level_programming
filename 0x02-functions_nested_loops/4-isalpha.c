#include "main.h"
/**
 * _isalpha - function to determine the case of a letter
 * @c: is the argument of the function isalpha
 *
 * Return: 1
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
		return (0);
}
