#include "main.h"
/**
 * _isalpha - function to determine if c is a letter, lowercase or uppercase
 * @c: is the argument of the function isalpha
 *
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else 
		return (0);
}
