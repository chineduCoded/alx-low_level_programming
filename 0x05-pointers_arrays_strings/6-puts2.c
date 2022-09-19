#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * @str: An input string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
