#include <stdio.h>
/**
 * main - program that print alphabets in lowercase and then in uppercase
 *
 * Return: 0
 *
*/
int main(void)
{
	char l;
	char u;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		putchar(l);
	}
	for (u = 'A' ; u <= 'Z' ; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
