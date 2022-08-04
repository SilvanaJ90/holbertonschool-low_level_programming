#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - check code
 * @filename: value
 * @text_content: number of letters it should read and print
 * Return: 0 or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;
	write(fd, text_content, len);
	close(fd);
	return (1);
}
