#include "holberton.h"

/**
 * getformat - get the char after the %
 * @c: the string
 * @pos: position of format
 * Return: Option contain the char after %
 * 0 if fails
 */

options getformat(const char *c, int *pos)
{
	int i = *pos;
	options op;

	for (; c[i]; i++)
	{
		if (c[i] == '%')
		{
			*pos = i + 1;
			op.type = c[i + 1];
			return (op);
		}
	}
	op.type = 0;
	return (op);
}
