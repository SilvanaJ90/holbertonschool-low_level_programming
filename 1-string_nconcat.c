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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = malloc(sizeof(*s3) * (strlen(s1) + strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	s3[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
	s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
