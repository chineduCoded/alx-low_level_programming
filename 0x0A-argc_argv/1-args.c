#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: counts arguments
 * @argv: arguments array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv; /* Ignore argv */
	printf("%i\n", argc - 1);

	return (0);
}
