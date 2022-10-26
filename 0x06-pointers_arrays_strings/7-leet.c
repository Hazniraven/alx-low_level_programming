#include <string.h>
#include "main.h"
/**
 * leet - write a functio that encodes a string into 1337
 * @s: pointer to string
 *
 * Return: 0
 */
char *leet(char *s)
{
	int r, t, len;
	char upper[6] = {'A', 'E', 'O', 'T', 'L'};
	char lower[6] = {'a', 'e', 'o', 't', 'l'};
	char replace_with[6] = {'4', '3', '0', '7', '1'};

	len = strlen(s);

	for (r = 0; r < len; r++)
	{
		for (t = 0; t < 5; t++)
		{
			if (s[r] == upper[t] || s[r] == lower[t])
			{
				s[r] = replace_with[t];
				break;
			}
		}
	}

	return (s);
}
