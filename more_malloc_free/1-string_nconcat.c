#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check code
 * @s1: string 1
 * @s2: string 2
 * Return: new pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = NULL;
	unsigned int i, j;
	unsigned int len1 =strlen(s1), len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
	{
		s3 = malloc(sizeof(char) * (len1 + len2) + n + 1);
		for (i = 0; s1[i] != '\0'; i++)
			s3[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++, i++)
			s3[i] = s2[j];

		s3[i + 1] = '\0';
		return (s3);
	}
	else
	{
		s3 = malloc(sizeof(char) * len1 + n + 1);
		for (i = 0; s1[i] != '\0'; i++)
			s3[i] = s1[i];
		for (j = 0; j < n; j++, i++)
                        s3[i] = s2[j];

		s3[i] = '\0';
		return (s3);
	}
	if (s3 == NULL)
		return (NULL);
}
