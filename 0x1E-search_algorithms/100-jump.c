#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *               Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = 0;
	size_t i;

	if (array != NULL)
	{
		while (hi < size && array[hi] < value)
		{
			lo = hi;
			hi += sqrt(size);
			printf("Value checked array[%lu] = [%d]\n", lo, array[lo]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);
		for (i = lo; i <= hi; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}

	return (-1);
}
