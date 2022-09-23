#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: an integer
 * Return: 1 if true, 0 if false
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values for string n in formatted form
 * @b: string to print
 * @begin: starting position
 * @end: ending position
 */
void printHexes(char *b, int begin, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + begin + 1));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @begin: starting position
 * @end: ending position
 */
void printASCII(char *b, int begin, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + begin);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int begin, end;

	if (size > 0)
	{
		for (begin = 0; begin < size; begin += 10)
		{
			end = (size - begin < 10) ? size - begin : 10;
			printf("%08x: ", begin);
			printHexes(b, begin, end);
			printASCII(b, begin, end);
			printf("\n");
		}
	} else
		printf("\n");
}
