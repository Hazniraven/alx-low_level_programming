#include <string.h>
#include "main.h"
/**
 * cap_string - write a function that capitalizes all words of a string
 * @s: pointer to string
 * Return: 0
 */
char *cap_string(char *s)
{
	int t, r, len;
	char bef;
	char sep[13] = " \t\n,;.!?\"(){}";

	len = strlen(s);
	bef = ' ';

	for (t = 0; t < len; t++)
	{
		for (r = 0; r < 13; r++)
		{
			if (bef != sep[r])
				continue;

			if (s[t] >= 'a' && s[t] <= 'z')
			{
				s[t] -= 32;
				break;
			}
		}

		bef = s[t];
	}

	return (s);
}
