#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase except q and e
 *
 * Return: 0
 *
*/
int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		if (l == 'e' || l == 'q')
			continue;
		putchar(l);
	}
	putchar('\n');
	return (0);
}
