#include "holberton.h"

/**
 * getformat - get the char after the %
 * @c: the string
 *
 * Return: the char after the %
 * 0 if fails
 */

char getformat(const char *c, int *pos)
{
	int i = *pos;

	for (; c[i]; i++, *pos++)
	{
		if (c[i] == '%')
		{
			*pos = *pos + 1;
			return (c[i + 1]);
		}
	}
	return (0);
}
