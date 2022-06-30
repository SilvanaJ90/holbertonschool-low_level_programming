#include "main.h"

/**
 * _strcmp: compara dos cadenas
 * @s1: cadena 1
 * @s2: cadena 2
 * Return: Always 0 si las cadenas son iguales, return entero negativo si s1 < s2 o positivo en caso contrario
 */

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
		if(*s1==0)
			return (0);
	return *(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1;
}

