#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: void.
 */
void puts_half(char *str)
{
	int length = 0, i, n;

	while (length >= 0)
	{
		if (str[length] != '\0')
		{
			length++;
		} else
		{
			break;
		}
	}

	if (length % 2 == 1)
		n = length / 2;
	else
		n = (length - 1) / 2;

	for (i = 0; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
