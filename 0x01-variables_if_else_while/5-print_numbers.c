#include <stdio.h>
/**
 * main - program that prints all single digits of base 10 starting from 0
 *
 * Return: 0
*/
int main(void)
{
	char d;

	for (d = '0' ; d <= '9' ; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
