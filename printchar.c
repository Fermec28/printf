#include "holberton.h"

/**
 * print_char - print character
 * @valist: character to be printed
 */
int print_char(va_list valist, options opt)
{
	char p = va_arg(valist, int);
	(void)opt;

	if (p >= 32 &&  p <= 126)
	{
		return (write(1, &p, 1));
	}
	else
	{
		printf("Error\n");
		exit(97);
	}
	return (0);
}
