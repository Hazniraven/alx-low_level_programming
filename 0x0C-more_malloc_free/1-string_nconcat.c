#include "main.h"

/**
 *string_nconcat - write a function that concatenates two strings
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *@n: bytes to be allocated
 *Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, len1, len2;


	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	p = malloc((len1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < n && len2 != 0; i++)
	{
		p[len1 + i] = s2[i];
		if (s2[i] == '\0')
		{
			i++;
			break;
		}
	}

	while (i < n)
	{
		p[len1 + i] = '\0';
		i++;
	}

	p[len1 + i] = '\0';

	return (p);
}
