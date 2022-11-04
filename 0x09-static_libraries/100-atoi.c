#include <ctype.h>
#include <string.h>
#include "main.h"
/**
   * _atoi - write a function that convert a string to an integer
    * @s: string to be converted into integer
     * Return: 0
      *
       */
int _atoi(char *s)
{
	int r, sign, len;
	unsigned int val;

	len = strlen(s);
	sign = 1;
	val = 0;

	for (r = 0; r < len; r++)
	{
		if (val > 0)
		{
			if (isdigit(s[r]) == 0)
			{
				break;
			}
		}
		if (s[r] == '-')
		{
			sign = sign * -1;
		}
		if (s[r] >= '0' && s[r] <= '9')
		{
			val = val * 10 + s[r] - '0';
		}
	}
	return (val * sign);
}
