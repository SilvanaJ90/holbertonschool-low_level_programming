#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check code
 * @s1: string 1
 * @s2: string 2
 * @n: number
 * Return: new pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = NULL;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
	{
		s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + n + 1));
		if (s3 == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			s3[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++, i++)
			s3[i] = s2[j];

		s3[i] = '\0';
		return (s3);
	}
	else
	{
		s3 = malloc(sizeof(char) * (strlen(s1) + n + 1));
		if (s3 == NULL)
			return (NULL);
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
