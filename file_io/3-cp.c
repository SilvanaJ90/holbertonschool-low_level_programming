#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * error97 - check code
 * exit: 97
 */

void error97(void)
{
   dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
   exit(97);
}

/**
 * error98 - check code
 * @f: value pointer
 * exit: 98
 */

void error98(char *f)
{
   dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
   exit(98);
}

/**
 * error99 - check code
 * @f: value pointer
 * exit: 99
 */

void error99(char *f)
{
   dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
   exit(99);
}

/**
 * error100 - check code
 * @f: value pointer
 * exit: 100
 */


void error100(char *f)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", f);
	exit(100);
}

/**
 * main - check the code
 * @argc: value
 * @argv: value
 * Return: Always 0.
 */

int main (int argc, char **argv)
{
	int source, target, sz, ret, closet, closes;
	char *file_from = argv[1];
	char *file_to = argv[2];
	char buf[1024];

	if (argc != 3)
	   error97();

	source = open(file_from, O_RDONLY);
	if (source == -1)
	   error98(file_from);
	target = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (target == -1)
		error99(file_to);
	do {
	   sz = read(source, buf, 1024);
	   if (sz == -1)
		  error98(file_from);
	   if (sz == 0)
		  break;
	   ret = write(target, buf, sz);
	   if (ret == -1)
		  error99(file_to);
	} while (1);
	closet = close(target);
	if (closet == -1)
		error100(file_to);
	closes = close (source);
	if (closes == -1)
		error100(file_from);
	return (0);
}
