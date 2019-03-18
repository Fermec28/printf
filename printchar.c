#include "holberton.h"

/**
 * print_char - print character
 * @valist: valist
 */
void print_char(va_list valist)
{
	char *p = va_arg(valist, char *);
	_putchar(p,1);
}
