#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers and it's a pointer
 * @n: the numbers of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int *begin, *end, c;
	int i;

	begin = a;
	end = a;

	for (i = 0; i < n - 1; i++)
	{
		end++;
	}

	for (i = 0; i < n / 2; i++)
	{
		c = *end;
		*end = *begin;
		*begin = c;

		begin++;
		end--;
	}
}
