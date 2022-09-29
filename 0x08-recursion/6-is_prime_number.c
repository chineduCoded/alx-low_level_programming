#include "main.h"

/**
 * primeFinder - search for if a number is a prime
 *
 * @a: the number to check
 * @b: the number we will go through
 *
 * Return: whether or not the number is a prime
 */

int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}

/**
 * is_prime_number - tells us if an integer is a prime number or not
 *
 * @n: the nmber to check
 *
 * Return: 0 if the number is not a prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
