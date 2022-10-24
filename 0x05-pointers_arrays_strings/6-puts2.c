#include "main.h"
/**
 * puts2 - write a function that prints every other character of a
 * string, starting with the first character, followed byy a new line
 * @str: string
 *
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
