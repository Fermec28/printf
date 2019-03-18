#include "holberton.h"

/**
 * getformat - get the char after the %
 * @c: the string
 *
 * Return: Option contain the char after %
 * 0 if fails
 */

options getformat(const char *c, int *pos)
{
	int i = *pos;
	options op;

	for (; c[i]; i++, *pos++)
	{
		if (c[i] == '%')
		{
			*pos = *pos + 1;
			op.type = c[i + 1];
			return (op);
		}
	}
	op.type = 0;
	return (op);
}
