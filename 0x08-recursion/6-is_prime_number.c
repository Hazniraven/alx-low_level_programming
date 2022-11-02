#include "main.h"

int check(int n, int a);

/**
 *is_prime_number - Write a function that returns 1 if the input
 *integer is a prime number, otherwise return 0
 *@n: number
 *Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check(n, 2));
	}
}

/**
 *check - check if a number is prime
 *@n: number
 *@a: start
 *
 *Return: 0 or 1
 */
int check(int n, int a)
{
	if (a < n / 2)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	return (check(n, a + 1));
}
