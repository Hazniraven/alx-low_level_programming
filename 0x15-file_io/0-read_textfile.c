#include "main.h"

/**
 *read_textfile - write a function that reads a textfile and prints it
 *to the POSIX standard output
 *@filename: name of file
 *@letters: number of letters it could read and print
 *
 *Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t name, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	name = open(filename, O_RDONLY);
	r = read(name, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (name == -1 || r == -1 || w == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(name);

	return (w);
}
