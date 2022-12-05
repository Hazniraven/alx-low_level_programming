#include "main.h"

/**
 *append_text_to_file - write a function that appends text at the end
 *of a file
 *@filename: name of the file
 *@text_content: NULL terminated string
 *
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	i = strlen(text_content);
	write(fd, text_content, i);

	close(fd);
	return (1);
}
