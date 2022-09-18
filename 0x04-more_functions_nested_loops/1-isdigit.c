#include main.h

/**
 * main - check it's a number within 1-9
 *
 * Return: 1 for number, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
