#include "holberton.h"

/**
 * print_char - print character
 * @valist: character to be printed
 */
void print_char(va_list valist)
{
	char p = va_arg(valist, int);
	if ( p >= 32 &&  p <= 126)
	{
		write(1, &p, 1);
	}
	else
	{
		printf("Error\n");
		exit (97);
	}
}
