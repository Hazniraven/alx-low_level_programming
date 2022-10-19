#include <stdio.h>
#include "main.h"
/**
 * main - calls print_fibonacci with 50
 *
 * Return: 0
*/
int main(void)
{
	int n = 50;

	print_fibonacci(n);

	return (0);
}

/**
 * print_fibonacci - program that prints the first 50
 * fibonacci numbers, starting with 1 and 2, followed by a new line
 * @i: input number in sequence
 * Return: none
 *
*/
void print_fibonacci(int i)
{
	int s;
	long int r;
	long int t1 = 1;
	long int t2 = 2;

	printf("%ld, %ld, ", t1, t2);

	for (s = 3; s <= i; s++)
	{
		r = t1 + t2;

		printf("%ld", r);

		if (s != i)
			printf(", ");

		t1 = t2;
		t2 = r;
	}
	printf("\n");
}
