#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: times diagonal line is printed.
 * Return: void.
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
