#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 *
*/
int main(void)
{
	char n;
	char i;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
