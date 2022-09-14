#include "main.h"
/** print_alphabet - print lowercase alphabets
 *
 * Description: print alphabets from 'a' to 'z' in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}


