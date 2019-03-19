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
	options formatto;
	int i = 0, bytes = 0;

	va_start(valist, format);
	for (;  format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				formatto = getformat(format, &i);
			else
				return (-1);
		}
		else
		{
			if (((format[i] >= 32 &&  format[i] <= 126)
			    || (format[i] >= 7 && format[i] <= 13)))
			{
				write(1, &format[i], 1);
				bytes++;
			}
			continue;
		}
		operate.f = getfunction(formatto.type);
		if (operate.f != NULL)
			bytes += operate.f(valist, formatto);
		else
		{
			bytes += write(1, &format[i - 1], 1);
			if (format[i] != '%')
				bytes += write(1, &format[i], 1);
		}
	}
	if (format == NULL)
		return (-1);
	va_end(valist);
	return (bytes);
}
