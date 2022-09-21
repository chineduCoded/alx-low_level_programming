#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input  string.
 * Return: the pointer to dest
 */

char *cap_string(char *s)
{
	int len = 0, i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + len) >= 97 && *(s + len) <= 122)
	{
		*(s + len) = *(s + len) - 32;
		len++;
	}
	while (*(s + len) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + len) == separators[i])
			{
				if ((*(s + (len + 1)) >= 97) && (*(s + (len + 1)) <= 122))
				       *(s + (len + 1)) = *(s + (len + 1)) - 32;
					break;
			}
		}
		len++;
	}

	return (s);
}
