#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: param
 * Return: (j * k)
 */

int _atoi(char *s)
{
	unsigned int len = 0, size = 0, j = 0, k = 1, m = 1, i;

	while (*(s + len) != '\0')
	{
		if (size > 0 && (*(s + len) < '0' || *(s + len) > '9'))
			break;
		if (*(s + len) == '-')
			k *= -1;

		if ((*(s + len) >= '0') && (*(s + len) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		len++;
	}

	for (i = len - size; i < len; i++)
	{
		j = j + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (j * k);
}
