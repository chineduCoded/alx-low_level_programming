#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes
 * @dest: a pointer to destination array
 * @src: a pointer to source of string to be appended
 * @n: n bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
