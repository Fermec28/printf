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
	char formatto, p;
	int i = 0;

	va_start(valist, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			formatto = getformat(format, &i);
			if (formatto == 0)
			{
				printf("Error\n");
				exit(98);
			}
		}
		else
		{
			p = format[i];
			if (p >= 32 &&  p <= 126)
			{
				write(1, &p, 1);
			}
			else
			{
				printf("Error\n");
				exit(97);
			}
			i++;
			continue;
		}
		operate.f = getfunction(formatto);
		if (operate.f == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		operate.f(valist);
		i++;
	}
	va_end(valist);
		return (0);
}
