#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - check code
 * @str: pointer
 * Return_ 0 always str
 */

char *_strdup(char *str)
{
	char *new_s = malloc(sizeof(*new_s) * strlen(str));
		if (str == NULL)
			return (NULL);
		strcpy(new_s, str);
		return (new_s);

		free (new_s);
}
