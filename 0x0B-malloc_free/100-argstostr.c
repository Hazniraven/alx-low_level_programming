#include "main.h"

/**
 *argstostr - write a function that concatenates all the arguments
 *of your program
 *@ac: number of arguments passed
 *@av: number of arguments in the array
 *Return: NULL
 */
char *argstostr(int ac, char **av)
{
	char *d;
	int i, j, t, len, s;

	t = 0;
	s = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s = s + strlen(av[i]);
	}

	d = malloc((sizeof(char) * s + ac + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			d[t] = av[i][j];
			t++;
		}
		d[t] = '\n';
		t++;
	}

	d[t] = '\0';

	return (d);
}
