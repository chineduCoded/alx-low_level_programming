#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new mmemory space loccation
 * @str: char
 * Return: ar
 */

char *_strdup(char *str)
{
	int i, end;
	char *ar;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
		;
	end += 1;
	ar = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
	{
		ar[i] = str[i];
	}
	if (ar == NULL)
		return (NULL);
	return (ar);
}
