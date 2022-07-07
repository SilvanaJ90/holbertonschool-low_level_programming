#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - check code
 * @s1: string 1
 * @s2: string 2
 * Return: new pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s3 = NULL;
	int i, j;

	if (!*s1 || !*s2)
		return (NULL);
	s3 = malloc(sizeof(*s3) * (strlen(s1) + strlen(s2) + 1));
		for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++, i++)
		s3[i] = s2[j];
		s3[i] = '\0';
		return (s3);
}
