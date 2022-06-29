#include "main.h"
#include <stdio.h>

/**
 * strcat - check code
 *
 * src - value
 *
 * dest - check
 */

char *_strcat(char *dest, char *src)
{
	char *saved = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while ((*dest++ = *src++) != '\0')
	{
		continue;
	}
	return saved;;
}
