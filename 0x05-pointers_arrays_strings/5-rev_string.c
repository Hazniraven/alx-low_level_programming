#include "main.h"
/**
 * rev_string - write a function that reverses a string
 * @s: string
 *
 * Return: none
 */
void rev_string(char *s)
{
	int g = 0, h, i;
	char f;

	while (s[g] != '\0')
	{
		g++;
	}
	i = g - 1;
	for (h = 0; i >= 0 && h < i; i--, h++)
	{
		f = s[h];
		s[h] = s[i];
		s[i] = f;
	}
}
