#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memoory using malloc
 * @b: number of memory
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
