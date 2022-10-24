#include <stdio.h>

void foo(int *ai);

int main(void)
{
	int x;
	x = 10;

	foo(&x);
	printf("%d\n", x);
	return (0);
}

void foo(int *a)
{
	*a = 20;
}
