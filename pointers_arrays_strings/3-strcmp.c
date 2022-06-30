#include "main.h"

/**
 * _strcmp: compara dos cadenas
 * @s1: cadena 1
 * @s2: cadena 2
 * Return: Always 0 si las cadenas son iguales, return entero negativo si s1 < s2 o positivo en caso contrario
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; i != '\0'; i++)
		if(s1[i] == s2[i])
			return (0);
	return *(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1;
}

