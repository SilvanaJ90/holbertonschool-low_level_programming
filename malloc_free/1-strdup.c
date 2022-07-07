#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - check code
 * @str: pointer
 * Return: 0 always str
 */

char *_strdup(char *str)
{
	int i;
	char *new_s;

	if (str == 0)
		return (NULL);
	new_s = malloc(sizeof(*new_s) * strlen(str) + 1);
	if (new_s == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		new_s[i] = str[i];
	}
		return (new_s);
}
