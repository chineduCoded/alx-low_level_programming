#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long i, j, k;
	unsigned long j1, j2, k1, k2;

	j = 1;
	k = 2;

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);

		k = k + j;
		j = k - j;
	}

	j1 = j / 10000000000;
	j2 = j % 10000000000;
	k1 = k / 10000000000;
	k2 = k % 10000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", k1 + (k2 / 10000000000));
		printf("%lu", k2 % 10000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
