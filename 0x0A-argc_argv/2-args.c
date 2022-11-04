#include <stdlib.h>
#include <stdio.h>

/**
 *main - write a program that prints all the arguments it recieves
 *@argc: number of arguments passed
 *@argv: number of arguments in array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
