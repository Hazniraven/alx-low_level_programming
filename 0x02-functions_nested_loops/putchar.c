#include <unistd.h>

/**
 * _putchar - writes the character cto stdout
 * @c: the character to print
 *
 *Return: on success 1
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar()
{
	return (write(1, &c, 1));
}
