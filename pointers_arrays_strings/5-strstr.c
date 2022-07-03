#include "main.h"

/**
 * _strstr - check code
 *
 * @haystack: check
 *
 * @needle: check
 *
 */


char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; haystack[i] == needle[0]; i++)
	{
		for (j = 0; needle[j] == needle[0]; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			continue;
		}
		else
		{
		return (haystack + i);
		}
	}
	return (0);
}
