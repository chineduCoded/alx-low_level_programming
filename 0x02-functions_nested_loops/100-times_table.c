#include "main.h"

/**
 * print_times_table - a function that prints n times, starting with 0.
 * @n: An input integer value
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i = 0, j, k;

	if (n < 0 || n > 15)
		return;

	while (i <= n)
	{
		for (k = 0; k <= n; k++)
		{
			j = i * k;
			if (k == 0)
				_putchar('0' + j);
			else if (j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + j);
			}
			else if (j < 100)
			{
				_putchar(' ');
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			else
			{
				_putchar('0' + j / 100);
				_putchar('0' + (j - 100) / 10);
				_putchar('0' + j % 10);
			}
			if (k < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
