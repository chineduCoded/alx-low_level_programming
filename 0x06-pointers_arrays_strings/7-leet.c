#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to s
 */

char *leet(char *s)
{
	int len = 0, i;
	int low_c[] = {97, 101, 111, 116, 108};
	int upper_c[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (*(s + len) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + len) == low_c[i] || *(s + len) == upper_c[i])
			{
				*(s + len) = n[i];
				break;
			}
		}
		len++;
	}

	return (s);
}
