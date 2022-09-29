#include "main.h"

/**
 * _strlen_recursion - length of string
 *@s: pointer to the string param
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * plChecker - palindrome checker
 * @s: pointer to string
 * @p: position
 * Return: boolean
 */

int plChecker(char *s, int p)
{
	if (p < 1)
		return (1);
	if (*s == *(s + p))
		return (plChecker(s + 1, p - 2));
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (plChecker(s, len - 1));
}
