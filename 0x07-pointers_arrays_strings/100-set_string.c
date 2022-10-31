#include "main.h"

/**
 * set_string - write a function that sets the value of a pointer to char
 * @s: pointer to string
 * @to: string
 *
 * Return: none
 */
void set_string(char **s, char *to)
{
	*s = to;
}
