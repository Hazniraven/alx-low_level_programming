#include <stdio.h>
/**
 * main - program that prints all possible different
 * combinations of three digits
 *
 * Return: 0 success
 *
*/
int main(void)
{
	int d, b, c;

	for (b = '0' ; b <= '9' ; b++)
	{
		for (c = '0' ; c <= '9' ; c++)
		{
			for (d = '0' ; d <= '9' ; d++)
			{
				if (b < c && c < d)
				{
				putchar(b);
				putchar(c);
				putchar(d);
				if (b == '7' && c == '8' && d == '9')
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
