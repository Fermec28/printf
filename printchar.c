#include "holberton.h"

/**
 * print_char - print character
 * @valist: valist
 */
void print_char(va_list valist)
{
	_putchar(va_arg(valist, int), 1);
}
