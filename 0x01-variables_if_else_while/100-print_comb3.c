#include <stdio.h>
/**
 * main - print two numbers combi
 *
 * Return: 0
 */
[1:54 AM, 9/10/2022] +234 706 316 5518: int main(void)
{
	int i = '0';
	int j = '0';
	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}
[1:54 AM, 9/10/2022] +234 706 316 5518: Second advanced
[1:56 AM, 9/10/2022] +234 706 316 5518: #include <stdio.h>
/**
 * * main - print numbers from 00 to 99.
 * *
 * * Return: 0 on success
 * */
int main(void)
{
int i = '0';
int j = '0';
int k = '0';
while (i <= '7')
{
while (j <= '8')
{
while (k <= '9')
{
if (i < j && j < k)
{
putchar(i);
putchar(j);
putchar(k);
if (!(i == '7' && j == '8' && k == '9'))
{
putchar(',');
putchar(' ');
}
}
k++;
}
k = '0';
j++;
}
j = '0';
i++;
}
putchar('\n');
return (0);
}
