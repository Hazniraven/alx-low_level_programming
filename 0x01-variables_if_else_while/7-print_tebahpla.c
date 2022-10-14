#include <stdio.h>
/**
 * main - program that prints the lowercase alphabets in reverse
 *
 * Return: 0
 *
*/
int main(void)
{
	char r;

	for (r = 'z' ; r >= 'a' ; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
