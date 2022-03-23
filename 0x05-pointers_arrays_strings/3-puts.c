#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout.
 * @str: input string.
 * Return: void.
 */
void _puts(char *str)
{
	int count = 1;

	while (count > 1)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			count = 0;
		}
		_putchar(str[count - 1]);
		count++;
	}
}
