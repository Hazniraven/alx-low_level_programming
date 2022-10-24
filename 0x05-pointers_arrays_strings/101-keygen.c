#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 *
 */
int main(void)
{
	int d, e;

	d = 0;

	srand((unsigned int)time('\0'));

	for (e = 0; e < 2772; e = e + d)
	{
		d = rand() % 128;

		if (d + e > 2772)
			break;

		printf("%c", d);
	}
	printf("%c\n", 2772 - e);

	return (0);
}
