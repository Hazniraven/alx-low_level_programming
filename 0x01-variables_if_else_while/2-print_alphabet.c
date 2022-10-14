#include <stdio.h>
/**
**main - write a program that prints the alphabet in lower case
*
*
* *Return: 0
*
*/
int main(void)
{
	char la;

	for (la = 'a' ; la <= 'z' ; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
