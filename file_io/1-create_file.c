#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - check code
 * @filename: value
 * @text_content: number of letters it should read and print
 * Return: 0 or 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, ret; /*Descriptor of the file from where the information*/
	char *buf; /*buffer array in which the read data should be save*/

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;
	buf = malloc(len * sizeof(char));
	if (buf == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	ret = write(fd, text_content, len);
	if (ret == -1)
		return (-1);
	close(fd);
	free(buf);
	return (1);
}
