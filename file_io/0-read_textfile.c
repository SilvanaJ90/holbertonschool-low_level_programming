#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - check code
 * @filename: value
 * @letters: number of letters it should read and print
 * Return: 0 or 1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz, ret; /*Descriptor of the file from where the information*/
	char *buf; /*buffer array in which the read data should be save*/

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	sz = read(fd, buf, letters);
	close(fd);
	if (sz == -1)
	{
		free(buf);
		return (0);
	}
	ret = write(STDERR_FILENO, buf, sz);
	free(buf);
	if (sz != ret)
		return (0);
	return (sz);
}
