#include "main.h"

/** more_numbers - Prints the numbers 0-14 ten times
* @num: is the value of number
* @count: is the number of times to count
*/

void more_numbers(void)
{
int num, count;

for (count = 0; count <= 9; count++)
{

for (num = 0; num <= 14; num++)
{

if (num > 9)

_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
