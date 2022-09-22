#include "main.h"
/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separators of words are: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *s)
{
	int cnt;

	/* scan through string */
	cnt = 0;
	while (s[cnt] != '\0')
	{
		/* if next character after cnt is a char, capitalize it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[cnt] == ' ' || s[cnt] == '\t' || s[cnt] == '\n' || s[cnt] == ',' || s[cnt] == ';' || s[cnt] == '.' || s[cnt] == '!' || s[cnt] == '?' || s[cnt] == '"' || s[cnt] == '(' || s[cnt] == ')' || s[cnt] == '{' || s[cnt] == '}')
		{
			if (s[cnt + 1] >= 97 && s[cnt + 1] <= 122)
			{
				s[cnt + 1] = s[cnt + 1] - 32;
			}
		}
		cnt++;
	}
	return (s);
}
