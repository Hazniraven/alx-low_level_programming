#include <string.h>
#include "main.h"
/**
 * rot13 - write a function that encodes a string using rot13
 * @s: pointer
 * Return: pointer value
 */
char *rot13(char *s)
{
	int r, t, len;
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rep[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	len = strlen(s);

	for (r = 0; r < len; r++)
	{
		for (t = 0; t < 52; t++)
		{
			if (s[r] == alph[t])
			{
				s[r] = rep[t];
				break;
			}
		}
	}

	return (s);
}
