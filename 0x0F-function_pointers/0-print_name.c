#include "function_pointers.h"

/**
 *print_name - write a function thats prints a name
 *@name: name of the person
 *@f: function pointer
 *
 *Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		(*f)(name);
	}
}
