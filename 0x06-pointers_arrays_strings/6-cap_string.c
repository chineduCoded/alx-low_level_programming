#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	int i, j, cnt;

	i = cnt = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (cnt == 0)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
			else
				cnt++;
		}
		if (str[j] == '!' || str[j] == '"' || str[j] == '(' || str[j] == ')')
			cnt = 0;
		else if (str[j] == ',' || str[j] == '.' || str[j] == '{' || str[j] == '}')
			cnt = 0;
		else if (str[j] == ';' || str[j] == '?' || str[j] == '\n')
			cnt = 0;
		else if (str[j] == '\t')
			cnt = 0;
		else if (str[j] == ' ')
			cnt = 0;
		else
			cnt++;
	}
	return (str);
}
