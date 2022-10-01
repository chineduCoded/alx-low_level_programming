#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: counts arguments
 * @argv: arguments passed
 * Return: 0 if successful, 1 otherwise and print Error
 */

int main(int argc, char *argv[])
{
	int i, m;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", i * m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
