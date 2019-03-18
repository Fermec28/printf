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

	op.precision = 0;
	op.signn = 0;
	for (; c[i]; i++)
	{
		if (c[i + 1] >= '0' && c[i + 1] <= '9')
		{
			op.precision =  op.precision + c[i + 1] - 48;
			continue;
		}
		if (c[i + 1] == '-')
		{
			if (op.signn == 1)
			{
				printf("Error\n");
				exit(96);
			}
			op.signn = 1;
			continue;
		}
		if (c[i + 1] == '+')
		{
			if (op.signp == 1)
			{
				printf("Error\n");
				exit(96);
			}
			op.signp = 1;
			continue;
		}
		*pos = i + 1;
		op.type = c[i + 1];
		return (op);
	}
	op.type = 0;
	return (op);
}
