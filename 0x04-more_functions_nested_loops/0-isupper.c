#include "main.h"

/**
 * main - determine if letter is uppercase
 * @c: is the letter
 *
 * Return: 1 for uppercase, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
