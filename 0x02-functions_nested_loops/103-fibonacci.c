#include <stdio.h>
/**
 * main - write a program that finds and prints the sum of the
 * even-valued terms, followed by a new line.
 * Return: returns 0
*/
int main(void)
{
	int d;
	long int e, f, g, sum;

	e = 1;
	f = 2;
	sum = 2;

	for (d = 0; d <= 30; d++)
	{
		if (f > 4000000)
			break;

		g = e + f;

		if (g % 2 == 0)
			sum += g;

		e = f;
		f = g;
	}
	printf("%ld\n", sum);

	return (0);
}
