#include <stdio.h>
/**
 * main - program that prints all single digitd of base 10 without using char
 *
 * Return: 0
*/
int main(void)
{
	int b;

	for (b = '0'; b <= '9' ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
