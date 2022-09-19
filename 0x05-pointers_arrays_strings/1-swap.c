#include "main.h"

/**
 * swap_int - a function that swaps two integers
 * @a: the first integer pointer
 * @b: second integer pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
