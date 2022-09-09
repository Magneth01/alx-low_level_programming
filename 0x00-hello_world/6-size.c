#include <stdio.h>

/**
 * main - printing
 *
 * Description: using the main function
 * the program prints size of various types 
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long: %lu bytes(s)\n", sizeof(li));
	printf("Size of a long long: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
