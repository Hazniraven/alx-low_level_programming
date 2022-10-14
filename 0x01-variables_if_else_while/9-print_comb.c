#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: 0 success
 *
*/
int main(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
		if (x == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
