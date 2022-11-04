#include <stdio.h>
#include <stdlib.h>

int check(int amount);

/**
 *main - write a program that prints the minimum number of coins to make
 *change for an amount of money
 *@argc: number of elements passed
 *@argv: number of elements in the array
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int amount, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);

		if (amount < 0)
		{
			printf("%d\n", change);
		}
		else
		{
			change = check(amount);
			printf("%d\n", change);
		}

		return (0);
	}
}

/**
 *check - check for the minimum coins for changing
 *@amount: amount to check
 *
 *Return: number of coins
 *
 */
int check(int amount)
{
	int change = 0;

	while (amount != 0)
	{
		if (amount - 25 >= 0)
		{
			amount -= 25;
			change++;
		}
		else if (amount - 10 >= 0)
		{
			amount -= 10;
			change++;
		}
		else if (amount - 5 >= 0)
		{
			amount -= 5;
			change++;
		}
		else if (amount - 2 >= 0)
		{
			amount -= 2;
			change++;
		}
		else
		{
			amount -= 1;
			change++;
		}
	}

	return (change);
}
