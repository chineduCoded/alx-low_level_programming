#include "main.h"


/**
 * print_alphabet - a  function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
}
