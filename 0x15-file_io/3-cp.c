#include "main.h"

/**
 *leave - leaves the program
 *@code: block of codes
 *@argv: number of arguments in index
 *
 *Return: none
 */
void leave(int code, char *argv[])
{
	switch (code)
	{
		case 1:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 2:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
			break;
		case 3:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
			break;
	}
}

/**
 *main - Write a program that copies the content of a file to another file
 *@argc: number of arguments passed
 *@argv: number of arguments in the array(index)
 *
 *Return: integer
 */
int main(int argc, char *argv[])
{
	int from_dp, copy_dp;
	ssize_t w = 0, c = 0;
	char buf[1024];

	if (argc != 3)
		leave(1, argv);

	from_dp = open(argv[1], O_RDONLY);
	if (from_dp < 0)
		leave(2, argv);
	copy_dp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (copy_dp < 0)
		leave(3, argv);

	c = 1024;
	while (c == 1024)
	{
		c = read(from_dp, buf, c);
		if  (c == -1)
			leave(2, argv);
		w = write(copy_dp, buf, c);
		if (w == -1)
			leave(3, argv);
	}
	c = close(from_dp);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_dp);
		exit(100);
	}
	c = close(copy_dp);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy_dp);
		exit(100);
	}

	return (0);
}
