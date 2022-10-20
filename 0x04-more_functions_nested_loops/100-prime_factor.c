#include <stdio.h>
/**
 * main - write a program that finds and prints thr largest prime
 * factor of the number 612852475143, followed by a new line
 *
 * Return: 0
*/
int main(void)
{
	long int num, i;

	num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}

	printf("%ld\n", i);

	return (0);
}
