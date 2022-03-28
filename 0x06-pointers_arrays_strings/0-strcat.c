#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int size1 = 0;
	int size2 = 0;

	while (*(dest + size1) != '\0')
	{
		size1++;
	}

	while (size2 >= 0)
	{
		*(dest + size1) = *(src + size2);
		if (*(src + size2) != '\0')
		{
			size1++;
			size2++;
		}
	}
	return (dest);
}
