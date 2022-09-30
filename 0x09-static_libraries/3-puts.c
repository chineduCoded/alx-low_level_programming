#include "main.h"

/**
 * _puts - puts to stdout
 * @s: params
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
