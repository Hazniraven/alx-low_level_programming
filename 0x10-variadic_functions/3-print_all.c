#include "variadic_functions.h"

/**
 *print_all - write a function that prints anything
 *@format: list of types of arguments passed to the function
 *
 *Return: none
 */
void print_all(const char * const format, ...)
{
	int i = 0, j, r = 0;
	va_list ap;
	char *string, types[5] = "cifs";

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (types[j] != '\0')
		{
			if (format[i] == types[j] && r != 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), r = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), r = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), r = 1;
				break;
			case 's':
				string = va_arg(ap, char *), r = 1;
				if (string)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		} i++;
	}
	va_end(ap);
	printf("\n");
}
