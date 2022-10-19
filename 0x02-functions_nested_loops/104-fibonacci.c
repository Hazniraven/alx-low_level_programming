#include <stdio.h>
#include "main.h"

void print_fibonacci(int);

/**
 * main - calls print_fibonacci with 50
 *
 * Return: 0
*/
int main(void)
{
	int n = 98;

	print_fibonacci(n);

	return (0);
}


/**
 * print_fibonacci - Write a program that finds and
 * prints the first 98 fibonacci numbers, starting
 * with 1 and 2, followed by a new line
 * @i: input number
 * Returns: 0
 *
*/
void print_fibonacci(int i)
{
	int c;
	long int d, fd, td, ft, tt;
	long int e = 2;
	long int j = 1;

	printf("%ld, %ld, ", j, e);

	for (c = 3; c < 89; c++)
	{
		d = j + e;

		printf("%ld, ", d);

		j = e;
		e = d;
	}
	d = j + e;

	ft = e / 1000000000;
	tt = e % 1000000000;
	fd = d / 1000000000;
	td = d % 1000000000;

	for (c = 89; c < i; c++)
	{
		printf("%ld%ld, ", fd, td);

		j = ft;
		e = tt;
		ft = fd;
		tt = td;
		fd = j + ft + ((e + tt) / 1000000000);
		td = (e + tt) % 1000000000;
	}

	printf("%ld%ld\n", fd, td);
}
