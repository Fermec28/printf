#include "holberton.h"

/**
 * _printf -  produces output according to a format.
 * @format: format to be printed
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list valist;
	op_t operate;
	char formatto;

	formatto = getformat(format);
	if (formatto == 0)
	{
		printf("Error\n");
		exit(98);
	}
	va_start(valist, format);
	operate.f = getfunction(formatto);
	if (operate.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	operate.f(valist);
	va_end(valist);
	return (0);
}
