#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  a function that prints all the natural numbers
 * from n to 98, followed by a new line.
 * @n: input integer
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
