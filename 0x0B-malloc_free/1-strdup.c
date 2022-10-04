#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space
 * @str: pointer to string
 *
 * Return: pointer to array of chars
 */

char *_strdup(char *str)
{
	char *ar;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (j = 0; j <= *str; j++)
	{
	}

	j += 1;
	ar = malloc(sizeof(char) * j);

	for (i = 0; i < j; i++)
		ar[i] = str[i];

	if (ar == NULL)
		return (NULL);

	return (ar);
}
