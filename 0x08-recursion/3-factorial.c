#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the integer param
 * Return: -1 to indicate error, 1 when n == 0...
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
