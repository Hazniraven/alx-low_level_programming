#include "3-calc.h"

/**
 *main - performs the ops
 *@argc: number of arguments
 *@argv: number of arguments in array
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);
	char a2;
	int a1, a3, d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a1 = atoi(argv[1]);
	a2 = *argv[2];
	a3 = atoi(argv[3]);
	if ((a2 == '/' || a2 == '%') && a3 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	d = p(a1, a3);
	printf("%d\n", d);
	return (0);
}
