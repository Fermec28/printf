#include "holberton.h"

/**
 * getformat - get the char after the %
 * @c: the string
 *
 * Return: the char after the %
 * 0 if fails
 */

char getformat(const char *c)
{
	int i = 0;

	for (; c[i]; i++)
	{
		printf("%i",i);
		if (c[i] == '%')
			return (c[i + 1]);
	}
	return (0);
}
