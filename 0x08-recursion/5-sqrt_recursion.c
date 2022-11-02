#include "main.h"

int find_sqrt(int n, int a);

/**
 *_sqrt_recursion - write a function that returns a natural square
 *root of a number
 *@n: number
 *
 *Return: 0
*/
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}

/**
 *find_sqrt - finds the square root of a number
 *@n: number
 *@a: find
 *
 *Return: natural square root or -1
 */
int find_sqrt(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, a + 1));
	}
}
